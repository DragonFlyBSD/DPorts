--- vendor/bazil.org/fuse/options_dragonfly.go.orig	2019-07-22 00:19:20 UTC
+++ vendor/bazil.org/fuse/options_dragonfly.go
@@ -0,0 +1,36 @@
+package fuse
+
+func localVolume(conf *mountConfig) error {
+	return nil
+}
+
+func volumeName(name string) MountOption {
+	return dummyOption
+}
+
+func daemonTimeout(name string) MountOption {
+	return func(conf *mountConfig) error {
+		conf.options["timeout"] = name
+		return nil
+	}
+}
+
+func noAppleXattr(conf *mountConfig) error {
+	return nil
+}
+
+func noAppleDouble(conf *mountConfig) error {
+	return nil
+}
+
+func exclCreate(conf *mountConfig) error {
+	return nil
+}
+
+func noBrowse(conf *mountConfig) error {
+	return nil
+}
+
+func noLocalCaches(conf *mountConfig) error {
+	return nil
+}
