--- lives-plugins/plugins/decoders/decplugin.h.orig	2020-10-14 05:24:28 UTC
+++ lives-plugins/plugins/decoders/decplugin.h
@@ -34,7 +34,7 @@ extern "C"
 #include <weed/weed-palettes.h>
 #endif
 
-#if defined (IS_DARWIN) || defined (__FreeBSD__)
+#if defined (IS_DARWIN) || defined (__FreeBSD__) || defined(__DragonFly__)
 #ifndef lseek64
 #define lseek64 lseek
 #endif
