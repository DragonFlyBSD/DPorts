This is required over USES=alias because it is an install header that other
ports use.

--- include/PGFplatform.h.orig	2015-07-18 06:16:02 UTC
+++ include/PGFplatform.h
@@ -336,7 +336,7 @@ inline OSError SetFPos(HANDLE hFile, int
 //-------------------------------------------------------------------------------
 // *BSD
 //-------------------------------------------------------------------------------
-#if defined(__NetBSD__) || defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__NetBSD__) || defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #ifndef __POSIX__ 
 #define __POSIX__ 
 #endif 
