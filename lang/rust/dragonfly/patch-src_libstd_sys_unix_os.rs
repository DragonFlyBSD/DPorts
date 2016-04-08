--- src/libstd/sys/unix/os.rs.orig	2016-03-01 19:18:55 UTC
+++ src/libstd/sys/unix/os.rs
@@ -37,25 +37,7 @@ static ENV_LOCK: StaticMutex = StaticMut
 
 /// Returns the platform-specific value of errno
 pub fn errno() -> i32 {
-    extern {
-        #[cfg_attr(any(target_os = "linux"), link_name = "__errno_location")]
-        #[cfg_attr(any(target_os = "bitrig",
-                       target_os = "netbsd",
-                       target_os = "openbsd",
-                       target_os = "android",
-                       target_env = "newlib"),
-                   link_name = "__errno")]
-        #[cfg_attr(target_os = "dragonfly", link_name = "__dfly_error")]
-        #[cfg_attr(any(target_os = "macos",
-                       target_os = "ios",
-                       target_os = "freebsd"),
-                   link_name = "__error")]
-        fn errno_location() -> *const c_int;
-    }
-
-    unsafe {
-        (*errno_location()) as i32
-    }
+    return 0;  // only used for sanitizer, errno method does not work on DF
 }
 
 /// Gets a detailed string description for the given error number.
