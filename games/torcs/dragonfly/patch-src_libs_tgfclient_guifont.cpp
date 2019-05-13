--- src/libs/tgfclient/guifont.cpp.orig	2012-06-10 04:18:03.000000000 +0300
+++ src/libs/tgfclient/guifont.cpp
@@ -24,7 +24,7 @@
 
 #ifdef WIN32
 #include <windows.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <machine/endian.h>
 #elif defined(sun)
 #define BIG_ENDIAN 1234
