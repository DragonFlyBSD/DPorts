--- vendor/github.com/pkg/term/termios/pty_dragonfly.go.orig	2019-11-14 10:40:37 UTC
+++ vendor/github.com/pkg/term/termios/pty_dragonfly.go
@@ -0,0 +1,33 @@
+package termios
+
+// #include<stdlib.h>
+import "C"
+
+import "syscall"
+
+func open_pty_master() (uintptr, error) {
+	return open_device("/dev/ptmx")
+}
+
+func Ptsname(fd uintptr) (string, error) {
+	slavename := C.GoString(C.ptsname(C.int(fd)))
+	return slavename, nil
+}
+
+func grantpt(fd uintptr) error {
+	rc := C.grantpt(C.int(fd))
+	if rc == 0 {
+		return nil
+	} else {
+		return syscall.Errno(rc)
+	}
+}
+
+func unlockpt(fd uintptr) error {
+	rc := C.unlockpt(C.int(fd))
+	if rc == 0 {
+		return nil
+	} else {
+		return syscall.Errno(rc)
+	}
+}
