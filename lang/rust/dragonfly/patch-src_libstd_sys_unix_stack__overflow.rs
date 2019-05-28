--- src/libstd/sys/unix/stack_overflow.rs.intermediate	2019-05-25 22:10:18 UTC
+++ src/libstd/sys/unix/stack_overflow.rs
@@ -151,7 +151,7 @@ mod imp {
 
     #[cfg(target_os = "dragonfly")]
     unsafe fn get_stack() -> libc::stack_t {
-        libc::stack_t { ss_sp: get_stackp() as *mut i8, ss_flags: 0, ss_size: SIGSTKSZ }
+        libc::stack_t { ss_sp: get_stackp() as *mut libc::c_void, ss_flags: 0, ss_size: SIGSTKSZ }
     }
 
     pub unsafe fn make_handler() -> Handler {
