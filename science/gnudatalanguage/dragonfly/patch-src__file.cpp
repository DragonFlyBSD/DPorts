--- src/file.cpp.intermediate	2016-01-13 18:32:20.000000000 +0200
+++ src/file.cpp
@@ -242,7 +242,7 @@ extern "C"
 #endif
 #define NTEST_SEARCH 7
 
-#if defined(__CYGWIN__) || defined(__FreeBSD__)
+#if defined(__CYGWIN__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define stat64 stat
 #define lstat64 lstat
 // for religious reasons, CYGWIN doesn't do lstat64
@@ -996,7 +996,7 @@ bool *tests )
   if ( noSort )
     globflags |= GLOB_NOSORT;
 
-#if !defined(__APPLE__) && !defined(__FreeBSD__)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
   if ( !quote ) // n/a on OS X
     globflags |= GLOB_NOESCAPE;
 
