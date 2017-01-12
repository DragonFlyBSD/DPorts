--- src/file.cpp.orig	2017-01-12 06:03:15 UTC
+++ src/file.cpp
@@ -244,7 +244,7 @@ extern "C"
 */
 #endif
 #define NTEST_SEARCH 7
-#if defined(__CYGWIN__) || defined(__FreeBSD__)
+#if defined(__CYGWIN__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define stat64 stat
 #define lstat64 lstat
 // for religious reasons, CYGWIN doesn't do lstat64
@@ -1004,7 +1004,7 @@ bool *tests )
   if ( noSort )
     globflags |= GLOB_NOSORT;
 
-#if !defined(__APPLE__) && !defined(__FreeBSD__)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
   if ( !quote ) // n/a on OS X
     globflags |= GLOB_NOESCAPE;
 
