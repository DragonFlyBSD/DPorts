--- fdlibm/k_standard.c.orig	2006-10-25 22:41:48.000000000 +0300
+++ fdlibm/k_standard.c
@@ -53,7 +53,7 @@
 #include "fdlibm.h"
 
 /* XXX ugly hack to get msvc to link without error. */
-#if _LIB_VERSION == _IEEE_ && !(defined(DARWIN) || defined(XP_MACOSX))
+#if _LIB_VERSION == _IEEE_ && !(defined(DARWIN) || defined(XP_MACOSX) || defined(__DragonFly__))
    int errno;
 #  define EDOM 0
 #  define ERANGE 0
