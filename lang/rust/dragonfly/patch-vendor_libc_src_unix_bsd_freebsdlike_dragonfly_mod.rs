--- vendor/libc/src/unix/bsd/freebsdlike/dragonfly/mod.rs.orig	2019-11-04 17:34:41 UTC
+++ vendor/libc/src/unix/bsd/freebsdlike/dragonfly/mod.rs
@@ -1038,7 +1038,18 @@ f! {
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
 extern {
+    #[thread_local]
+    pub static mut errno: ::c_int;
+
     pub fn setgrent();
     pub fn mprotect(addr: *mut ::c_void, len: ::size_t, prot: ::c_int)
                     -> ::c_int;
