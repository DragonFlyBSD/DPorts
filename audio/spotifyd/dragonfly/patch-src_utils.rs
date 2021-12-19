--- src/utils.rs.intermediate	2021-12-19 15:24:40.000000000 +0000
+++ src/utils.rs
@@ -3,7 +3,7 @@ use std::env;
 #[cfg(target_os = "macos")]
 use whoami;
 
-#[cfg(any(target_os = "freebsd", target_os = "linux"))]
+#[cfg(any(target_os = "freebsd", target_os = "dragonfly", target_os = "linux"))]
 fn get_shell_ffi() -> Option<String> {
     use libc::{geteuid, getpwuid_r};
     use std::{ffi::CStr, mem, ptr};
