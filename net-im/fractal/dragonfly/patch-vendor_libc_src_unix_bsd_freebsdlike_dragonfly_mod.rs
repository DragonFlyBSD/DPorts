--- vendor/libc/src/unix/bsd/freebsdlike/dragonfly/mod.rs.orig	2019-11-30 10:09:17 UTC
+++ vendor/libc/src/unix/bsd/freebsdlike/dragonfly/mod.rs
@@ -1039,6 +1039,7 @@ f! {
 }
 
 extern {
+    pub fn __errno_location() -> *mut ::c_int;
     pub fn setgrent();
     pub fn mprotect(addr: *mut ::c_void, len: ::size_t, prot: ::c_int)
                     -> ::c_int;
