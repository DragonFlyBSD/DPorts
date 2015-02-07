--- src/libstd/sys/unix/c.rs.orig
+++ src/libstd/sys/unix/c.rs
@@ -72,7 +72,8 @@ pub const WNOHANG: libc::c_int = 1;
 #[cfg(target_os = "linux")]
 pub const _SC_GETPW_R_SIZE_MAX: libc::c_int = 70;
 #[cfg(any(target_os = "macos",
-          target_os = "freebsd"))]
+          target_os = "freebsd",
+          target_os = "dragonfly"))]
 pub const _SC_GETPW_R_SIZE_MAX: libc::c_int = 71;
 #[cfg(target_os = "android")]
 pub const _SC_GETPW_R_SIZE_MAX: libc::c_int = 0x0048;
@@ -91,7 +92,8 @@ pub struct passwd {
 
 #[repr(C)]
 #[cfg(any(target_os = "macos",
-          target_os = "freebsd"))]
+          target_os = "freebsd",
+          target_os = "dragonfly"))]
 pub struct passwd {
     pub pw_name: *mut libc::c_char,
     pub pw_passwd: *mut libc::c_char,
