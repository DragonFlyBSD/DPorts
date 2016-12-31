--- src/liblibc/src/unix/bsd/freebsdlike/dragonfly/mod.rs.orig	2016-12-20 23:36:07 UTC
+++ src/liblibc/src/unix/bsd/freebsdlike/dragonfly/mod.rs
@@ -293,7 +293,7 @@ pub const NOTE_TRACK: ::uint32_t = 0x000
 pub const NOTE_TRACKERR: ::uint32_t = 0x00000002;
 pub const NOTE_CHILD: ::uint32_t = 0x00000004;
 
-pub const MSG_NOSIGNAL: ::uint32_t = 0x400;
+pub const MSG_NOSIGNAL: ::int32_t = 0x400;
 
 extern {
     pub fn mprotect(addr: *mut ::c_void, len: ::size_t, prot: ::c_int)
