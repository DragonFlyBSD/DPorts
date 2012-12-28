--- utils/gtf/scitech.h.intermediate	2012-12-28 15:54:19.000000000 +0100
+++ utils/gtf/scitech.h	2012-12-28 15:55:22.000000000 +0100
@@ -228,7 +228,7 @@
 #endif
 
 /* 32-bit FreeBSD compile environment */
-#elif	defined(__FreeBSD__)
+#elif	defined(__FreeBSD__) || defined(__DragonFly__)
 #ifndef	__32BIT__
 #define __32BIT__
 #endif
