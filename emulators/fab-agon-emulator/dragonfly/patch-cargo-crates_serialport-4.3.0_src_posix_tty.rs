--- cargo-crates/serialport-4.3.0/src/posix/tty.rs.orig
+++ cargo-crates/serialport-4.3.0/src/posix/tty.rs
@@ -471,7 +471,7 @@
     /// On some platforms this will be the actual device baud rate, which may differ from the
     /// desired baud rate.
     #[cfg(any(
-        target_os = "dragonflybsd",
+        target_os = "dragonfly",
         target_os = "freebsd",
         target_os = "netbsd",
         target_os = "openbsd"
@@ -614,7 +614,7 @@
 
     #[cfg(any(
         target_os = "android",
-        target_os = "dragonflybsd",
+        target_os = "dragonfly",
         target_os = "freebsd",
         target_os = "netbsd",
         target_os = "openbsd",
