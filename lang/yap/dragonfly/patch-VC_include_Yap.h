--- VC/include/Yap.h.orig	2010-10-18 11:48:20.000000000 +0300
+++ VC/include/Yap.h
@@ -239,7 +239,7 @@ extern char     Option[20];
 #endif
 
 #if !IN_SECOND_QUADRANT
-#if __linux__ || __FreeBSD__ || __NetBSD__ || mips || __APPLE__
+#if __linux__ || __FreeBSD__ || __DragonFly__ || __NetBSD__ || mips || __APPLE__
 #if defined(YAPOR) && defined(__alpha)
 #define MMAP_ADDR 0x40000000
 #elif mips
@@ -575,7 +575,7 @@ and  RefOfTerm(t) : Term -> DBRef = ...
 	incompatible with the high tag scheme. Linux-ELF also does not like
 	if you place things in the lower addresses (power to the libc people).
 */
-#if (defined(_AIX) || defined(_WIN32) || defined(sparc) || defined(__sparc) || defined(mips) || defined(__FreeBSD__) || defined(_POWER) || defined(__linux__) || defined(IN_SECOND_QUADRANT)) && !defined(TABLING)
+#if (defined(_AIX) || defined(_WIN32) || defined(sparc) || defined(__sparc) || defined(mips) || defined(__FreeBSD__) || defined(__DragonFly__)  || defined(_POWER) || defined(__linux__) || defined(IN_SECOND_QUADRANT)) && !defined(TABLING)
 #define USE_LOW32_TAGS 1
 #endif
 
