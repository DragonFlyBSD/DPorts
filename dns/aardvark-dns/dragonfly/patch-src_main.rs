--- src/main.rs.orig
+++ src/main.rs
@@ -34,6 +34,9 @@
 
 fn main() {
     // Close all fds we inherited from our parent process, we only need stdio.
+    #[cfg(target_os = "dragonfly")]
+    let _ = unsafe { libc::closefrom(3) };
+    #[cfg(not(target_os = "dragonfly"))]
     let _ = unsafe { libc::close_range(3, libc::c_uint::MAX, 0) };
 
     let formatter = Formatter3164 {
