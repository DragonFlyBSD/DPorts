--- cargo-crates/webbrowser-0.5.2/src/lib.rs.orig	2019-08-22 10:22:35 UTC
+++ cargo-crates/webbrowser-0.5.2/src/lib.rs
@@ -261,6 +261,7 @@ fn open_browser_internal(browser: Browse
 ///    first
 #[cfg(any(
     target_os = "linux",
+    target_os = "dragonfly",
     target_os = "freebsd",
     target_os = "netbsd",
     target_os = "openbsd"
@@ -280,6 +281,7 @@ fn open_browser_internal(browser: Browse
 }
 #[cfg(any(
     target_os = "linux",
+    target_os = "dragonfly",
     target_os = "freebsd",
     target_os = "netbsd",
     target_os = "openbsd"
@@ -320,6 +322,7 @@ fn open_on_unix_using_browser_env(url: &
     target_os = "windows",
     target_os = "macos",
     target_os = "linux",
+    target_os = "dragonfly",
     target_os = "freebsd",
     target_os = "netbsd",
     target_os = "openbsd"
