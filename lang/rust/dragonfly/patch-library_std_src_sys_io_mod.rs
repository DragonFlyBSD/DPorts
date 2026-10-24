--- library/std/src/sys/io/mod.rs.orig
+++ library/std/src/sys/io/mod.rs
@@ -32,7 +32,7 @@
 #[cfg_attr(not(target_os = "linux"), allow(unused_imports))]
 #[cfg(all(
     target_family = "unix",
-    not(any(target_os = "dragonfly", target_os = "vxworks", target_os = "rtems"))
+    not(any(target_os = "vxworks", target_os = "rtems"))
 ))]
 pub use error::errno_location;
 #[cfg_attr(not(target_os = "linux"), allow(unused_imports))]
