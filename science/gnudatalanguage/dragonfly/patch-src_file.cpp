--- src/file.cpp.orig	2020-06-19 16:03:33 UTC
+++ src/file.cpp
@@ -252,7 +252,7 @@ static void rewinddir(DIR *dir)
 */
 #endif
 #define NTEST_SEARCH 7
-#if defined(__CYGWIN__) || defined(__FreeBSD__) || defined(__APPLE__)
+#if defined(__CYGWIN__) || defined(__FreeBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 #define stat64 stat
 #define lstat64 lstat
 // for religious reasons, CYGWIN doesn't do lstat64
@@ -1057,7 +1057,7 @@ static void FileSearch( FileListT& fileL
 //    if( noSort) sorting is done again later in file_search.
     globflags |= GLOB_NOSORT;
 
-#if !defined(__APPLE__) && !defined(__FreeBSD__)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
   if ( !quote ) // n/a on OS X
     globflags |= GLOB_NOESCAPE;
 
