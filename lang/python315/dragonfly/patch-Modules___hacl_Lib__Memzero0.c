--- Modules/_hacl/Lib_Memzero0.c.orig	2026-08-05 10:29:49 UTC
+++ Modules/_hacl/Lib_Memzero0.c
@@ -31,7 +31,7 @@
 #include <string.h>
 #endif
 
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #include <strings.h>
 #endif
 
@@ -57,7 +57,7 @@ void Lib_Memzero0_memzero0(void *dst, uint64_t len) {
     SecureZeroMemory(dst, len_);
   #elif defined(__APPLE__) && defined(__MACH__) && defined(APPLE_HAS_MEMSET_S)
     memset_s(dst, len_, 0, len_);
-  #elif (defined(__linux__) && !defined(LINUX_NO_EXPLICIT_BZERO)) || defined(__FreeBSD__) || defined(__OpenBSD__)
+  #elif (defined(__linux__) && !defined(LINUX_NO_EXPLICIT_BZERO)) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
     explicit_bzero(dst, len_);
   #elif defined(__NetBSD__)
     explicit_memset(dst, 0, len_);
