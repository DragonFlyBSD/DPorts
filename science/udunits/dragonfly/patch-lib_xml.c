--- lib/xml.c.orig	2021-02-03 19:47:11.024387000 +0100
+++ lib/xml.c	2021-02-03 19:48:08.064449000 +0100
@@ -38,7 +38,7 @@
 #endif
 #include <sys/stat.h>
 #include <sys/types.h>
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <dlfcn.h>
 #elif defined(__APPLE__)
 #define _DARWIN_C_SOURCE
@@ -2137,7 +2137,7 @@
     if (absXmlPathname[0] == 0) {
         const char* prefix = NULL; // Installation directory
 
-#       if defined(__APPLE__) || defined(__linux__) || defined(__FreeBSD__)
+#       if defined(__APPLE__) || defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
             Dl_info     info;
             const char  sep = '/'; // Pathname component separator
             char        buf[PATH_MAX];
