--- src/vendor/golang.org/x/net/route/interface_dragonfly.go.orig	2023-04-27 17:04:59 UTC
+++ src/vendor/golang.org/x/net/route/interface_dragonfly.go
@@ -0,0 +1,70 @@
+// Copyright 2021 The Go Authors. All rights reserved.
+// Use of this source code is governed by a BSD-style
+// license that can be found in the LICENSE file.
+
+// Implementation for DragonflyBSD. This is unlikely to work for
+// RTM_VERSION != 7.
+
+package route
+
+import "syscall"
+
+func (w *wireFormat) parseInterfaceMessage(_ RIBType, b []byte) (Message, error) {
+	// b is a struct if_msghdr
+	if len(b) < w.bodyOff {
+		return nil, errMessageTooShort
+	}
+	l := int(nativeEndian.Uint16(b[:2]))
+	if len(b) < l {
+		return nil, errInvalidMessage
+	}
+	attrs := uint(nativeEndian.Uint32(b[12:16]))
+	if attrs&syscall.RTA_IFP == 0 {
+		return nil, nil
+	}
+	if attrs != syscall.RTA_IFP {
+		// The call to parseLinkAddr below assumes there's exactly one
+		// address.
+		return nil, errInvalidMessage
+	}
+	m := &InterfaceMessage{
+		Version: int(b[2]),
+		Type:    int(b[3]),
+		Addrs:   make([]Addr, syscall.RTAX_MAX),
+		Flags:   int(nativeEndian.Uint32(b[8:12])),
+		Index:   int(nativeEndian.Uint16(b[4:6])),
+		extOff:  w.extOff,
+		raw:     b[:l],
+	}
+	a, err := parseLinkAddr(b[w.bodyOff:])
+	if err != nil {
+		return nil, err
+	}
+	m.Addrs[syscall.RTAX_IFP] = a
+	m.Name = a.(*LinkAddr).Name
+	return m, nil
+}
+
+func (w *wireFormat) parseInterfaceAddrMessage(_ RIBType, b []byte) (Message, error) {
+	// b is a struct ifa_msghdr
+	if len(b) < w.bodyOff {
+		return nil, errMessageTooShort
+	}
+	l := int(nativeEndian.Uint16(b[:2]))
+	if len(b) < l {
+		return nil, errInvalidMessage
+	}
+	m := &InterfaceAddrMessage{
+		Version: int(b[2]),
+		Type:    int(b[3]),
+		Flags:   int(nativeEndian.Uint32(b[8:12])),
+		Index:   int(nativeEndian.Uint16(b[4:6])),
+		raw:     b[:l],
+	}
+	var err error
+	m.Addrs, err = parseAddrs(uint(nativeEndian.Uint32(b[12:16])), parseKernelInetAddr, b[w.bodyOff:])
+	if err != nil {
+		return nil, err
+	}
+	return m, nil
+}
