--- seek.h.orig	1998-06-15 10:53:16 UTC
+++ seek.h
@@ -1,5 +1,6 @@
 #ifndef SEEK_H
 #define SEEK_H
+#include <unistd.h>	/* for lseek() */
 
 typedef unsigned long seek_pos;
 
