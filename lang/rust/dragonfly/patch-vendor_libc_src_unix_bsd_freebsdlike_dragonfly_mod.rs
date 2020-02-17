--- vendor/libc/src/unix/bsd/freebsdlike/dragonfly/mod.rs.orig	2020-01-27 17:21:00 UTC
+++ vendor/libc/src/unix/bsd/freebsdlike/dragonfly/mod.rs
@@ -1054,6 +1054,7 @@ f! {
 }
 
 extern "C" {
+    pub fn __errno_location() -> *mut ::c_int;
     pub fn setgrent();
     pub fn mprotect(
         addr: *mut ::c_void,
