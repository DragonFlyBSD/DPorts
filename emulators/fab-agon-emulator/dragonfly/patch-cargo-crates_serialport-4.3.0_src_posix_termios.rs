--- cargo-crates/serialport-4.3.0/src/posix/termios.rs.orig
+++ cargo-crates/serialport-4.3.0/src/posix/termios.rs
@@ -8,7 +8,7 @@
 
 cfg_if! {
     if #[cfg(any(
-        target_os = "dragonflybsd",
+        target_os = "dragonfly",
         target_os = "freebsd",
         target_os = "ios",
         target_os = "macos",
@@ -59,7 +59,7 @@
 }
 
 #[cfg(any(
-    target_os = "dragonflybsd",
+    target_os = "dragonfly",
     target_os = "freebsd",
     target_os = "netbsd",
     target_os = "openbsd",
@@ -111,7 +111,7 @@
 }
 
 #[cfg(any(
-    target_os = "dragonflybsd",
+    target_os = "dragonfly",
     target_os = "freebsd",
     target_os = "netbsd",
     target_os = "openbsd",
@@ -222,7 +222,7 @@
 
 // BSDs use the baud rate as the constant value so there's no translation necessary
 #[cfg(any(
-    target_os = "dragonflybsd",
+    target_os = "dragonfly",
     target_os = "freebsd",
     target_os = "netbsd",
     target_os = "openbsd"
