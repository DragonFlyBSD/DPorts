--- cargo-crates/serialport-4.3.0/src/posix/enumerate.rs.orig
+++ cargo-crates/serialport-4.3.0/src/posix/enumerate.rs
@@ -22,6 +22,7 @@
 }
 
 #[cfg(any(
+    target_os = "dragonfly",
     target_os = "freebsd",
     target_os = "ios",
     target_os = "linux",
@@ -564,7 +565,7 @@
             }
             Ok(vec)
         }
-    } else if #[cfg(target_os = "freebsd")] {
+    } else if #[cfg(any(target_os = "freebsd", target_os = "dragonfly"))] {
         use std::path::Path;
 
         /// Scans the system for serial ports and returns a list of them.
