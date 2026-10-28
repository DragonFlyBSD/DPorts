--- Godeps/_workspace/src/github.com/Sirupsen/logrus/terminal_dragonfly.go.orig	2026-10-26 04:26:55 UTC
+++ Godeps/_workspace/src/github.com/Sirupsen/logrus/terminal_dragonfly.go
@@ -0,0 +1,20 @@
+/*
+  DragonFly: same termios layout and TIOCGETA as FreeBSD.
+*/
+package logrus
+
+import (
+	"syscall"
+)
+
+const ioctlReadTermios = syscall.TIOCGETA
+
+type Termios struct {
+	Iflag  uint32
+	Oflag  uint32
+	Cflag  uint32
+	Lflag  uint32
+	Cc     [20]uint8
+	Ispeed uint32
+	Ospeed uint32
+}
