--- library/std/src/sys/io/error/unix.rs.orig
+++ library/std/src/sys/io/error/unix.rs
@@ -2,10 +2,11 @@
 use crate::io;
 
 unsafe extern "C" {
-    #[cfg(not(any(target_os = "dragonfly", target_os = "vxworks", target_os = "rtems")))]
+    #[cfg(not(any(target_os = "vxworks", target_os = "rtems")))]
     #[cfg_attr(
         any(
             target_os = "linux",
+            target_os = "dragonfly",
             target_os = "emscripten",
             target_os = "fuchsia",
             target_os = "l4re",
