--- cargo-crates/system-interface-0.27.2/src/fs/fd_flags.rs.orig
+++ cargo-crates/system-interface-0.27.2/src/fs/fd_flags.rs
@@ -86,13 +86,14 @@
         let flags = fcntl_getfl(self)?;
 
         fd_flags.set(FdFlags::APPEND, flags.contains(OFlags::APPEND));
-        #[cfg(not(target_os = "freebsd"))]
+        #[cfg(not(any(target_os = "freebsd", target_os = "dragonfly")))]
         fd_flags.set(FdFlags::DSYNC, flags.contains(OFlags::DSYNC));
         fd_flags.set(FdFlags::NONBLOCK, flags.contains(OFlags::NONBLOCK));
         #[cfg(any(
             target_os = "ios",
             target_os = "macos",
             target_os = "freebsd",
+            target_os = "dragonfly",
             target_os = "fuchsia"
         ))]
         {
@@ -102,6 +103,7 @@
             target_os = "ios",
             target_os = "macos",
             target_os = "freebsd",
+            target_os = "dragonfly",
             target_os = "fuchsia"
         )))]
         {
