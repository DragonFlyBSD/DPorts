--- utils/TerraSync/terrasync.cxx.orig	2013-09-16 18:49:01.000000000 +0000
+++ utils/TerraSync/terrasync.cxx
@@ -56,7 +56,7 @@
 
 #if defined(_MSC_VER) || defined(__MINGW32__)
     typedef void (__cdecl * sighandler_t)(int);
-#elif defined( __APPLE__ ) || defined (__FreeBSD__)
+#elif defined( __APPLE__ ) || defined (__FreeBSD__) || defined (__DragonFly__)
     typedef sig_t sighandler_t;
 #endif
 
