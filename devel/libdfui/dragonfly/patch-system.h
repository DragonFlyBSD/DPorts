CAPS removed circa 2013

--- system.h.orig	2006-04-18 03:40:44.000000000 +0300
+++ system.h
@@ -44,10 +44,6 @@
 #  define HAS_NPIPE
 #endif
 
-#if (__DragonFly__)
-#  define HAS_CAPS
-#endif
-
 #ifndef HAS_TCP
 #ifndef HAS_NPIPE
 #ifndef HAS_CAPS
