--- cargo-crates/mac_address-1.1.8/src/iter/mod.rs.orig	2006-07-24 01:21:28 UTC
+++ cargo-crates/mac_address-1.1.8/src/iter/mod.rs
@@ -6,6 +6,7 @@ mod internal;
     target_os = "linux",
     target_os = "macos",
     target_os = "freebsd",
+    target_os = "dragonfly",
     target_os = "netbsd",
     target_os = "openbsd",
     target_os = "android",
