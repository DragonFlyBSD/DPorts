--- src/liblibc/src/unix/bsd/freebsdlike/dragonfly/mod.rs.orig	2017-07-04 07:41:43 UTC
+++ src/liblibc/src/unix/bsd/freebsdlike/dragonfly/mod.rs
@@ -134,7 +134,7 @@ s! {
 }
 
 pub const RAND_MAX: ::c_int = 0x7fff_ffff;
-pub const PTHREAD_STACK_MIN: ::size_t = 1024;
+pub const PTHREAD_STACK_MIN: ::size_t = 16384;
 pub const SIGSTKSZ: ::size_t = 40960;
 pub const MADV_INVAL: ::c_int = 10;
 pub const O_CLOEXEC: ::c_int = 0x00020000;
