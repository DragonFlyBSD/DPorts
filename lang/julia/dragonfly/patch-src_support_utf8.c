--- src/support/utf8.c.orig	2016-09-20 05:54:22.000000000 +0300
+++ src/support/utf8.c
@@ -29,7 +29,7 @@
 #include <malloc.h>
 #define snprintf _snprintf
 #else
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <alloca.h>
 #endif /* __FreeBSD__ */
 #endif
