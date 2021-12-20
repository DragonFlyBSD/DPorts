--- vendor/libc/src/unix/bsd/freebsdlike/dragonfly/mod.rs.orig	2020-08-07 08:29:09 UTC
+++ vendor/libc/src/unix/bsd/freebsdlike/dragonfly/mod.rs
@@ -1059,6 +1059,7 @@ f! {
 }
 
 extern "C" {
+    pub fn __errno_location() -> *mut ::c_int;
     pub fn setgrent();
     pub fn mprotect(
         addr: *mut ::c_void,
