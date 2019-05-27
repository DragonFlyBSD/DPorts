--- include/ctools/ctransition/ncbimem.hpp.orig	2017-11-08 12:52:45 UTC
+++ include/ctools/ctransition/ncbimem.hpp
@@ -157,7 +157,7 @@ NLM_EXTERN void* Nlm_CallocViaMalloc(siz
 #define HandLock    Nlm_HandLock
 #define HandUnlock  Nlm_HandUnlock
 
-#if (defined(OS_UNIX_SYSV) || defined(OS_UNIX_SUN) || defined(OS_UNIX_OSF1) || defined(OS_UNIX_LINUX) || defined(OS_UNIX_AIX) || defined(OS_UNIX_DARWIN)) && !defined(OS_UNIX_ULTRIX) || defined(OS_UNIX_FREEBSD)
+#if (defined(OS_UNIX_SYSV) || defined(OS_UNIX_SUN) || defined(OS_UNIX_OSF1) || defined(OS_UNIX_LINUX) || defined(OS_UNIX_AIX) || defined(OS_UNIX_DARWIN)) && !defined(OS_UNIX_ULTRIX) || defined(OS_UNIX_FREEBSD) || defined(__DragonFly__)
 #ifndef IBM_DISABLE_MMAP
 #define MMAP_AVAIL
 #endif
