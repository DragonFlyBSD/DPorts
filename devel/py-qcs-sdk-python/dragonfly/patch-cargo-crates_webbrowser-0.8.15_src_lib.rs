--- cargo-crates/webbrowser-0.8.15/src/lib.rs.orig	2026-10-26 01:32:26 UTC
+++ cargo-crates/webbrowser-0.8.15/src/lib.rs
@@ -51,6 +51,7 @@
         target_os = "aix",
         target_os = "linux",
         target_os = "freebsd",
+        target_os = "dragonfly",
         target_os = "netbsd",
         target_os = "openbsd",
         target_os = "haiku",
@@ -67,6 +68,7 @@ mod os;
     target_os = "macos",
     target_os = "linux",
     target_os = "freebsd",
+    target_os = "dragonfly",
     target_os = "netbsd",
     target_os = "openbsd",
     target_os = "haiku",
@@ -82,6 +84,7 @@ compile_error!(
     target_os = "aix",
     target_os = "linux",
     target_os = "freebsd",
+    target_os = "dragonfly",
     target_os = "netbsd",
     target_os = "openbsd",
     target_os = "haiku",
