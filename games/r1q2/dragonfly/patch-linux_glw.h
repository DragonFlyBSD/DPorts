--- linux/glw.h.orig
+++ linux/glw.h
@@ -30,7 +30,7 @@
 #ifndef __GLW_H__
 #define __GLW_H__
 
-#if defined (__linux__)  || defined (__bsd__) || defined (__sgi) || defined (__FreeBSD__) || defined (__NetBSD__) || defined (__sun__)
+#if defined (__linux__)  || defined (__bsd__) || defined (__sgi) || defined (__FreeBSD__) || defined (__DragonFly__) || defined (__NetBSD__) || defined (__sun__)
 
 typedef struct
 {
