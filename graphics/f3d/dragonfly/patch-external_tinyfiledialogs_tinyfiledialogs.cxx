--- external/tinyfiledialogs/tinyfiledialogs.cxx.orig
+++ external/tinyfiledialogs/tinyfiledialogs.cxx
@@ -62,7 +62,7 @@
 #ifndef _GNU_SOURCE
  #define _GNU_SOURCE /* used only to resolve symbolic links. Can be commented out */
  #ifndef _POSIX_C_SOURCE
-  #ifdef __NetBSD__
+  #if defined(__NetBSD__) || defined(__DragonFly__)
     #define _POSIX_C_SOURCE 200112L
     #define _XOPEN_SOURCE 600 /* https://pubs.opengroup.org/onlinepubs/007904875/functions/xsh_chap02_02.html */
   #elif defined(__FreeBSD__)
