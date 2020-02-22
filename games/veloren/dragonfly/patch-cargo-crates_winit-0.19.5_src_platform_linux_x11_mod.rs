--- cargo-crates/winit-0.19.5/src/platform/linux/x11/mod.rs.orig	2019-08-26 22:03:25 UTC
+++ cargo-crates/winit-0.19.5/src/platform/linux/x11/mod.rs
@@ -20,7 +20,7 @@ use std::ffi::CStr;
 use std::ops::Deref;
 use std::os::raw::*;
 use libc::{select, fd_set, FD_SET, FD_ZERO, FD_ISSET, EINTR, EINVAL, ENOMEM, EBADF};
-#[cfg(target_os = "linux")]
+#[cfg(any(target_os = "linux", target_os = "dragonfly"))]
 use libc::__errno_location;
 #[cfg(target_os = "freebsd")]
 use libc::__error as __errno_location;
