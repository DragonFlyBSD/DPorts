--- utf8.c.orig	2018-01-23 18:37:15 UTC
+++ utf8.c
@@ -19,7 +19,7 @@
 #ifdef WIN32
 #include <malloc.h>
 #else
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <alloca.h>
 #endif
 #endif
