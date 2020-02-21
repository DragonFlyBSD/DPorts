--- ../msgbox-rs-68fe39a60019b38a1569ae4e9ed796a0f0542673/src/lib.rs.orig	2019-12-27 09:39:49 UTC
+++ ../msgbox-rs-68fe39a60019b38a1569ae4e9ed796a0f0542673/src/lib.rs
@@ -4,13 +4,13 @@ pub use icon::IconType;
 /**
  * GTK+3
  */
-#[cfg(any(target_os = "linux", target_os = "freebsd"))]
+#[cfg(any(target_os = "linux", target_os = "freebsd", target_os = "dragonfly"))]
 extern crate gtk;
 
-#[cfg(any(target_os = "linux", target_os = "freebsd"))]
+#[cfg(any(target_os = "linux", target_os = "freebsd", target_os = "dragonfly"))]
 mod linux;
 
-#[cfg(any(target_os = "linux", target_os = "freebsd"))]
+#[cfg(any(target_os = "linux", target_os = "freebsd", target_os = "dragonfly"))]
 pub use linux::*;
 
 /**
