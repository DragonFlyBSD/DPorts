--- src/internal/routebsd/interface_classic.go.orig	2026-10-19 22:20:36 UTC
+++ src/internal/routebsd/interface_classic.go
@@ -20,13 +20,19 @@
 		return nil, errInvalidMessage
 	}
 	attrs := uint(nativeEndian.Uint32(b[4:8]))
+	index := int(nativeEndian.Uint16(b[12:14]))
+	if runtime.GOOS == "dragonfly" {
+		// DragonFly orders the header index, flags, addrs.
+		attrs = uint(nativeEndian.Uint32(b[12:16]))
+		index = int(nativeEndian.Uint16(b[4:6]))
+	}
 
 	m := &InterfaceMessage{
 		Version: int(b[2]),
 		Type:    int(b[3]),
 		Addrs:   make([]Addr, syscall.RTAX_MAX),
 		Flags:   int(nativeEndian.Uint32(b[8:12])),
-		Index:   int(nativeEndian.Uint16(b[12:14])),
+		Index:   index,
 		extOff:  w.extOff,
 		raw:     b[:l],
 	}
@@ -66,13 +72,18 @@
 		Flags:   int(nativeEndian.Uint32(b[8:12])),
 		raw:     b[:l],
 	}
+	attrs := uint(nativeEndian.Uint32(b[4:8]))
 	if runtime.GOOS == "netbsd" {
 		m.Index = int(nativeEndian.Uint16(b[16:18]))
+	} else if runtime.GOOS == "dragonfly" {
+		// DragonFly orders the header index, flags, addrs.
+		m.Index = int(nativeEndian.Uint16(b[4:6]))
+		attrs = uint(nativeEndian.Uint32(b[12:16]))
 	} else {
 		m.Index = int(nativeEndian.Uint16(b[12:14]))
 	}
 	var err error
-	m.Addrs, err = parseAddrs(uint(nativeEndian.Uint32(b[4:8])), b[w.bodyOff:])
+	m.Addrs, err = parseAddrs(attrs, b[w.bodyOff:])
 	if err != nil {
 		return nil, err
 	}
