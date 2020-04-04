--- cargo-crates/ring-0.16.11/src/rand.rs.orig	2020-02-03 23:35:51 UTC
+++ cargo-crates/ring-0.16.11/src/rand.rs
@@ -181,6 +181,7 @@ use self::sysrand_or_urandom::fill as fi
 
 #[cfg(any(
     target_os = "freebsd",
+    target_os = "dragonfly",
     target_os = "netbsd",
     target_os = "openbsd",
     target_os = "solaris"
@@ -355,6 +356,7 @@ mod sysrand_or_urandom {
         feature = "dev_urandom_fallback"
     ),
     target_os = "freebsd",
+    target_os = "dragonfly",
     target_os = "netbsd",
     target_os = "openbsd",
     target_os = "solaris"
