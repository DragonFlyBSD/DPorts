--- crates/ruff/src/main.rs.orig	2026-06-25 17:00:55 UTC
+++ crates/ruff/src/main.rs
@@ -15,6 +15,7 @@ static GLOBAL: mimalloc::MiMalloc = mimalloc::MiMalloc
 #[cfg(all(
     not(target_os = "windows"),
     not(target_os = "openbsd"),
+    not(target_os = "dragonfly"),
     not(target_os = "aix"),
     not(target_os = "android"),
     any(
