--- crates/ty/src/main.rs.orig	2026-06-25 17:00:55 UTC
+++ crates/ty/src/main.rs
@@ -6,6 +6,7 @@ use ty::{ExitStatus, run};
     not(target_os = "macos"),
     not(target_os = "windows"),
     not(target_os = "openbsd"),
+    not(target_os = "dragonfly"),
     not(target_os = "aix"),
     not(target_os = "android"),
     any(
