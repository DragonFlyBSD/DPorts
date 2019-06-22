--- window.c.orig	2006-11-11 05:52:14 UTC
+++ window.c
@@ -23,7 +23,7 @@
 #include <stropts.h>
 #include <poll.h>
 #endif
-#ifdef _AIX
+#if defined(_AIX) || defined(__DragonFly__)
 #include <sys/select.h>
 #endif
 
