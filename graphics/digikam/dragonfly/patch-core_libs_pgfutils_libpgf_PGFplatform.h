--- core/libs/pgfutils/libpgf/PGFplatform.h.intermediate	2019-03-15 08:24:39.000000000 +0200
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
@@ -485,7 +485,7 @@ __inline int MulDiv(int nNumber, int nNu
 #define FSFromStart			SEEK_SET
 #define FSFromCurrent		SEEK_CUR
 #define FSFromEnd			SEEK_END
-#if !(defined(__FreeBSD__) && (__cplusplus >= 201103L))
+#if !((defined(__FreeBSD__) || defined(__DragonFly__)) && (__cplusplus >= 201103L))
 #define nullptr				NULL
 #endif
 
