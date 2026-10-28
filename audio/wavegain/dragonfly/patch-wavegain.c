--- wavegain.c.orig	2026-10-26 06:36:29 UTC
+++ wavegain.c
@@ -36,7 +36,7 @@
 
 #include <fcntl.h>
 
-#ifndef __MACOSX__
+#if !defined(__MACOSX__) && !defined(__DragonFly__)
 #include <malloc.h>
 #endif
 
