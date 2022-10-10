--- src/icon-lookup.c.orig	2022-10-08 21:51:16.366100000 +0200
+++ src/icon-lookup.c	2022-10-08 21:51:35.585655000 +0200
@@ -3,7 +3,7 @@
 
 #include <glib.h>
 #include <stdio.h>
-#include <malloc.h>
+#include <sys/malloc.h>
 #include <unistd.h>
 #include <assert.h>
 
