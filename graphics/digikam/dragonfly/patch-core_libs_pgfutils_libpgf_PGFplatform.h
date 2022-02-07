--- core/libs/pgfutils/libpgf/PGFplatform.h.orig	2021-12-10 12:53:43 UTC
+++ core/libs/pgfutils/libpgf/PGFplatform.h
@@ -336,7 +336,7 @@ inline OSError SetFPos(HANDLE hFile, int
 //-------------------------------------------------------------------------------
 // *BSD
 //-------------------------------------------------------------------------------
-#if defined(__NetBSD__) || defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__NetBSD__) || defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #ifndef __POSIX__
 #define __POSIX__
 #endif
