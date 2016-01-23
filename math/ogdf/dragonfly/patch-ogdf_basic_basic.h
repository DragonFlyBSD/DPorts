--- ogdf/basic/basic.h.intermediate	2016-01-23 14:28:46 UTC
+++ ogdf/basic/basic.h
@@ -88,7 +88,7 @@
 #define OGDF_SYSTEM_OSX
 #endif
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define OGDF_SYSTEM_FREEBSD
 #endif
 
