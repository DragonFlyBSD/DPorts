--- internal/daemon/nanosleep/dragonfly.go.orig	2026-10-26 05:28:26 UTC
+++ internal/daemon/nanosleep/dragonfly.go
@@ -0,0 +1,55 @@
+//go:build dragonfly
+
+package nanosleep
+
+import (
+	"syscall"
+	"unsafe"
+
+	"golang.org/x/sys/unix"
+)
+
+// SYS_clock_nanosleep from DragonFly's <sys/syscall.h>; golang.org/x/sys/unix
+// doesn't define it for DragonFly.
+const sysClockNanosleep = 241
+
+// Do the interface allocations only once for common
+// Errno values.
+var (
+	errEAGAIN error = syscall.EAGAIN
+	errEINVAL error = syscall.EINVAL
+	errENOENT error = syscall.ENOENT
+)
+
+// Like the FreeBSD version, but DragonFly's clock_nanosleep(2) returns the
+// error number as its result (as POSIX specifies for the libc function)
+// instead of through errno.
+func clockNanosleep(clockid int32, flags int, request *unix.Timespec,
+	remain *unix.Timespec,
+) error {
+	r1, _, e1 := unix.Syscall6(sysClockNanosleep,
+		uintptr(clockid), uintptr(flags),
+		uintptr(unsafe.Pointer(request)),
+		uintptr(unsafe.Pointer(remain)),
+		0, 0)
+	if e1 != 0 {
+		return errnoErr(e1)
+	}
+	return errnoErr(syscall.Errno(r1))
+}
+
+// errnoErr returns common boxed Errno values, to prevent
+// allocations at runtime.
+func errnoErr(e syscall.Errno) error {
+	switch e {
+	case 0:
+		return nil
+	case unix.EAGAIN:
+		return errEAGAIN
+	case unix.EINVAL:
+		return errEINVAL
+	case unix.ENOENT:
+		return errENOENT
+	}
+	return e
+}
