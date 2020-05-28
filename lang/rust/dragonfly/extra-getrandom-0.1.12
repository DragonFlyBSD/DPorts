--- cargo-crates/getrandom-0.1.12/src/util_libc.rs.orig	2019-08-24 23:12:51 UTC
+++ cargo-crates/getrandom-0.1.12/src/util_libc.rs
@@ -14,11 +14,11 @@ use core::ptr::NonNull;
 cfg_if! {
     if #[cfg(any(target_os = "netbsd", target_os = "openbsd", target_os = "android"))] {
         use libc::__errno as errno_location;
-    } else if #[cfg(any(target_os = "linux", target_os = "emscripten", target_os = "redox"))] {
+    } else if #[cfg(any(target_os = "linux", target_os = "emscripten", target_os = "redox", target_os = "dragonfly"))] {
         use libc::__errno_location as errno_location;
     } else if #[cfg(any(target_os = "solaris", target_os = "illumos"))] {
         use libc::___errno as errno_location;
-    } else if #[cfg(any(target_os = "macos", target_os = "freebsd", target_os = "dragonfly"))] {
+    } else if #[cfg(any(target_os = "macos", target_os = "freebsd"))] {
         use libc::__error as errno_location;
     } else if #[cfg(target_os = "haiku")] {
         use libc::_errnop as errno_location;
