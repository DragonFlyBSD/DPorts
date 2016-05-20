--- /dev/null	2016-05-20 14:08:33 UTC
+++ util/fdset_dragonfly_amd64.go
@@ -0,0 +1,11 @@
+package util
+
+import "syscall"
+
+func FD_SET(p *syscall.FdSet, fd int) {
+	p.Bits[fd/64] |= 1 << uint(fd) % 64
+}
+
+func FD_ISSET(p *syscall.FdSet, fd int) bool {
+	return (p.Bits[fd/64] & (1 << uint(fd) % 64)) != 0
+}
