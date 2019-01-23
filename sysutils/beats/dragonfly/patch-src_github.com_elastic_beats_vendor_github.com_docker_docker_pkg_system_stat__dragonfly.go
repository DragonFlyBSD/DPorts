--- /dev/null	2018-12-23 01:27:00.999411907 +0100
+++ ../src/github.com/elastic/beats/vendor/github.com/docker/docker/pkg/system/stat_dragonfly.go	2018-12-23 01:40:37.274219000 +0100
@@ -0,0 +1,13 @@
+package system
+
+import "syscall"
+
+// fromStatT converts a syscall.Stat_t type to a system.Stat_t type
+func fromStatT(s *syscall.Stat_t) (*StatT, error) {
+	return &StatT{size: s.Size,
+		mode: uint32(s.Mode),
+		uid:  s.Uid,
+		gid:  s.Gid,
+		rdev: uint64(s.Rdev),
+		mtim: s.Mtim}, nil
+}
