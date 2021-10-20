--- src/seek.h.orig	2008-06-15 20:31:14 UTC
+++ src/seek.h
@@ -3,6 +3,8 @@
 #ifndef SEEK_H
 #define SEEK_H
 
+#include <unistd.h>	/* for lseek() */
+
 typedef unsigned long seek_pos;
 
 extern seek_pos seek_cur(int);
