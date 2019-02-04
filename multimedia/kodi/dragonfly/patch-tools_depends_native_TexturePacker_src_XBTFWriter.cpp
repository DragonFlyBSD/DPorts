--- tools/depends/native/TexturePacker/src/XBTFWriter.cpp.orig	2018-08-04 13:44:51.316948000 +0200
+++ tools/depends/native/TexturePacker/src/XBTFWriter.cpp	2018-08-04 13:45:08.837324000 +0200
@@ -20,7 +20,7 @@
 
 #define __STDC_FORMAT_MACROS
 #include <inttypes.h>
-#if defined(TARGET_FREEBSD) || defined(TARGET_DARWIN)
+#if defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY) || defined(TARGET_DARWIN)
 #include <stdlib.h>
 #elif !defined(TARGET_DARWIN)
 #include <malloc.h>
