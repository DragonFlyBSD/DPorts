--- autodir.h.orig	2016-11-11 13:34:18 UTC
+++ autodir.h
@@ -3,6 +3,8 @@
 #elif !defined(AUTODIR_H)
 #define AUTODIR_H
 
+#include <climits> // for PATH_MAX
+
 // automap will auto-release mmaped areas
 class autodir {
     DIR *dir;
