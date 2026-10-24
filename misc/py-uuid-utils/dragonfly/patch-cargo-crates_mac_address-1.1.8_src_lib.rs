--- cargo-crates/mac_address-1.1.8/src/lib.rs.orig	2006-07-24 01:21:28 UTC
+++ cargo-crates/mac_address-1.1.8/src/lib.rs
@@ -14,6 +14,7 @@ mod os;
     target_os = "linux",
     target_os = "macos",
     target_os = "freebsd",
+    target_os = "dragonfly",
     target_os = "netbsd",
     target_os = "openbsd",
     target_os = "android",
@@ -38,6 +39,7 @@ pub enum MacAddressError {
     target_os = "linux",
     target_os = "macos",
     target_os = "freebsd",
+    target_os = "dragonfly",
     target_os = "netbsd",
     target_os = "openbsd",
     target_os = "android",
