--- vendor/go.bug.st/serial/serial_resetbuf_dragonfly.go.orig	1970-01-01 00:00:00 UTC
+++ vendor/go.bug.st/serial/serial_resetbuf_dragonfly.go
@@ -0,0 +1,18 @@
+//
+// Copyright 2014-2026 Cristian Maglie. All rights reserved.
+// Use of this source code is governed by a BSD-style
+// license that can be found in the LICENSE file.
+//
+
+package serial
+
+import "golang.org/x/sys/unix"
+
+// TIOCFLUSH takes a pointer to the queue selector.
+func (port *unixPort) ResetInputBuffer() error {
+	return unix.IoctlSetPointerInt(port.handle, ioctlTcflsh, unix.TCIFLUSH)
+}
+
+func (port *unixPort) ResetOutputBuffer() error {
+	return unix.IoctlSetPointerInt(port.handle, ioctlTcflsh, unix.TCOFLUSH)
+}
