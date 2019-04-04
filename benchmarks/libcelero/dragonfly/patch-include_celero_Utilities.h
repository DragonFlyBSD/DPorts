--- include/celero/Utilities.h.orig	2018-10-27 15:55:09 UTC
+++ include/celero/Utilities.h
@@ -23,7 +23,7 @@
 #include <unistd.h>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <stdio.h>
 #endif
 
