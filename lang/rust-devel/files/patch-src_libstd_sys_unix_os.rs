--- src/libstd/sys/unix/os.rs.orig
+++ src/libstd/sys/unix/os.rs
@@ -196,7 +196,7 @@
 
 #[cfg(target_os = "dragonfly")]
 pub fn load_self() -> Option<Vec<u8>> {
-    use std::io;
+    use old_io;
 
     match old_io::fs::readlink(&Path::new("/proc/curproc/file")) {
         Ok(path) => Some(path.into_vec()),
