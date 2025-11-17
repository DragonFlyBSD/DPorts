--- seek.h.orig	2025-11-16 14:40:02.233255000 +0100
+++ seek.h	2025-11-16 14:40:11.403335000 +0100
@@ -3,6 +3,8 @@
 #ifndef SEEK_H
 #define SEEK_H
 
+#include <unistd.h>	/* for lseek() */
+
 typedef unsigned long seek_pos;
 
 extern seek_pos seek_cur(int);
