--- stoc/source/corereflection/criface.cxx.orig	2015-04-20 19:36:29 UTC
+++ stoc/source/corereflection/criface.cxx
@@ -22,7 +22,7 @@
 #ifdef SAL_UNX
 #include <sal/alloca.h>
 #endif
-#if !(defined(MACOSX) || defined(IOS) || defined(FREEBSD))
+#if !(defined(MACOSX) || defined(IOS) || defined(FREEBSD) || defined(__DragonFly__))
 #include <malloc.h>
 #endif
 #include <rtl/alloc.h>
