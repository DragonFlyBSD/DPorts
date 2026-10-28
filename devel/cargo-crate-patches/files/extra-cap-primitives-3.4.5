--- cargo-crates/cap-primitives-3.4.5/src/rustix/fs/oflags.rs.orig
+++ cargo-crates/cap-primitives-3.4.5/src/rustix/fs/oflags.rs
@@ -13,13 +13,13 @@
         oflags |= OFlags::SYNC;
     }
     if options.dsync {
-        #[cfg(not(target_os = "freebsd"))]
+        #[cfg(not(any(target_os = "freebsd", target_os = "dragonfly")))]
         {
             oflags |= OFlags::DSYNC;
         }
 
         // Where needed, approximate `DSYNC` with `SYNC`.
-        #[cfg(target_os = "freebsd")]
+        #[cfg(any(target_os = "freebsd", target_os = "dragonfly"))]
         {
             oflags |= OFlags::SYNC;
         }
@@ -31,6 +31,7 @@
         target_os = "watchos",
         target_os = "visionos",
         target_os = "freebsd",
+        target_os = "dragonfly",
         target_os = "fuchsia"
     )))]
     if options.rsync {
