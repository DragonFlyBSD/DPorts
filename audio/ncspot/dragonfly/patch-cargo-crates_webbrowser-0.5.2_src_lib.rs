--- cargo-crates/webbrowser-0.5.2/src/lib.rs.orig	2019-08-22 10:22:35 UTC
+++ cargo-crates/webbrowser-0.5.2/src/lib.rs
@@ -263,7 +263,8 @@ fn open_browser_internal(browser: Browse
     target_os = "linux",
     target_os = "freebsd",
     target_os = "netbsd",
-    target_os = "openbsd"
+    target_os = "openbsd",
+    target_os = "dragonfly"
 ))]
 #[inline]
 fn open_browser_internal(browser: Browser, url: &str) -> Result<ExitStatus> {
@@ -282,7 +283,8 @@ fn open_browser_internal(browser: Browse
     target_os = "linux",
     target_os = "freebsd",
     target_os = "netbsd",
-    target_os = "openbsd"
+    target_os = "openbsd",
+    target_os = "dragonfly"
 ))]
 fn open_on_unix_using_browser_env(url: &str) -> Result<ExitStatus> {
     let browsers = ::std::env::var("BROWSER")
@@ -322,7 +324,8 @@ fn open_on_unix_using_browser_env(url: &
     target_os = "linux",
     target_os = "freebsd",
     target_os = "netbsd",
-    target_os = "openbsd"
+    target_os = "openbsd",
+    target_os = "dragonfly"
 )))]
 compile_error!("Only Windows, Mac OS, Linux and *BSD are currently supported");
 
