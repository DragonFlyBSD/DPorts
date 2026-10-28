--- cargo-crates/serialport-4.7.3/src/posix/enumerate.rs.orig
+++ cargo-crates/serialport-4.7.3/src/posix/enumerate.rs
@@ -27,6 +27,7 @@
 }
 
 #[cfg(any(
+    target_os = "dragonfly",
     target_os = "freebsd",
     target_os = "ios",
     target_os = "linux",
@@ -660,7 +661,7 @@
             }
             Ok(vec)
         }
-    } else if #[cfg(target_os = "freebsd")] {
+    } else if #[cfg(any(target_os = "freebsd", target_os = "dragonfly"))] {
         use std::path::Path;
 
         /// Scans the system for serial ports and returns a list of them.
