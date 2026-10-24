--- src/corelib/io/qfilesystemengine_unix.cpp.orig	2026-05-07 07:50:01 UTC
+++ src/corelib/io/qfilesystemengine_unix.cpp
@@ -37,7 +37,7 @@
 # define _PATH_TMP          "/tmp"
 #endif
 
-#if __has_include(<sys/disk.h>)
+#if __has_include(<sys/disk.h>) && !defined(__DragonFly__)
 // BSDs (including Apple Darwin)
 # include <sys/disk.h>
 #endif
