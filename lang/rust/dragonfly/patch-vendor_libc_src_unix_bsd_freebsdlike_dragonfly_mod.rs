--- vendor/libc/src/unix/bsd/freebsdlike/dragonfly/mod.rs.orig	2019-12-16 17:26:11 UTC
+++ vendor/libc/src/unix/bsd/freebsdlike/dragonfly/mod.rs
@@ -1053,7 +1053,17 @@ f! {
     }
 }
 
+// DragonFlyBSD's __error function is declared with "static inline", so it must
+// be implemented in the libc crate, as a pointer to a static thread_local.
+f! {
+    pub fn __error() -> *mut ::c_int {
+        &mut errno
+    }
+}
+
 extern "C" {
+    #[thread_local]
+    pub static mut errno: ::c_int;
     pub fn setgrent();
     pub fn mprotect(
         addr: *mut ::c_void,
