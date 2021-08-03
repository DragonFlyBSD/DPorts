--- drivers/docker/driver_dragonfly.go.orig	1970-01-01 01:00:00.000000000 +0100
+++ drivers/docker/driver_dragonfly.go	2021-08-03 22:04:48.152141000 +0200
@@ -0,0 +1,5 @@
+package docker
+
+func setCPUSetCgroup(path string, pid int) error {
+	return nil
+}
