--- libs/file_permissions/src/unix.rs.orig
+++ libs/file_permissions/src/unix.rs
@@ -6,6 +6,9 @@
 #[cfg(target_os = "openbsd")]
 use std::os::openbsd::fs::MetadataExt;
 
+#[cfg(target_os = "dragonfly")]
+use std::os::dragonfly::fs::MetadataExt;
+
 #[cfg(target_os = "linux")]
 use std::os::linux::fs::MetadataExt;
 
