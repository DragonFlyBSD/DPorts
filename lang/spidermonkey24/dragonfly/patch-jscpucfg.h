--- jscpucfg.h.orig	2013-10-29 20:40:20 UTC
+++ jscpucfg.h
@@ -40,7 +40,7 @@
 #  define IS_BIG_ENDIAN 1
 # endif
 
-#elif defined(JS_HAVE_ENDIAN_H)
+#elif defined(JS_HAVE_ENDIAN_H) && !defined(__DragonFly__)
 # include <endian.h>
 
 # if defined(__BYTE_ORDER)
