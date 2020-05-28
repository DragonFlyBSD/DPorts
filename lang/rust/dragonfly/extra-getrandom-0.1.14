--- cargo-crates/getrandom-0.1.14/src/util_libc.rs.orig	2020-01-07 12:05:50 UTC
+++ cargo-crates/getrandom-0.1.14/src/util_libc.rs
@@ -14,7 +14,7 @@ use core::ptr::NonNull;
 cfg_if! {
     if #[cfg(any(target_os = "netbsd", target_os = "openbsd", target_os = "android"))] {
         use libc::__errno as errno_location;
-    } else if #[cfg(any(target_os = "linux", target_os = "emscripten", target_os = "redox"))] {
+    } else if #[cfg(any(target_os = "linux", target_os = "emscripten", target_os = "redox", target_os = "dragonfly"))] {
         use libc::__errno_location as errno_location;
     } else if #[cfg(any(target_os = "solaris", target_os = "illumos"))] {
         use libc::___errno as errno_location;
@@ -28,10 +28,6 @@ cfg_if! {
 cfg_if! {
     if #[cfg(target_os = "vxworks")] {
         use libc::errnoGet as get_errno;
-    } else if #[cfg(target_os = "dragonfly")] {
-        // Until rust-lang/rust#29594 is stable, we cannot get the errno value
-        // on DragonFlyBSD. So we just return an out-of-range errno.
-        unsafe fn get_errno() -> libc::c_int { -1 }
     } else {
         unsafe fn get_errno() -> libc::c_int { *errno_location() }
     }
