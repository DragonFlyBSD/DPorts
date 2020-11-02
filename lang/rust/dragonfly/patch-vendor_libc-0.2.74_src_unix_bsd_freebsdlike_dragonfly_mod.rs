--- vendor/libc-0.2.74/src/unix/bsd/freebsdlike/dragonfly/mod.rs.intermediate	2020-11-01 22:09:57 UTC
+++ vendor/libc-0.2.74/src/unix/bsd/freebsdlike/dragonfly/mod.rs
@@ -1059,6 +1059,7 @@ f! {
 }
 
 extern "C" {
+    pub fn __errno_location() -> *mut ::c_int;
     pub fn setgrent();
     pub fn mprotect(
         addr: *mut ::c_void,
