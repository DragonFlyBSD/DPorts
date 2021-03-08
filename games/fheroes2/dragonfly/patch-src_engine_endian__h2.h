--- src/engine/endian_h2.h.orig	2021-02-04 12:27:26 UTC
+++ src/engine/endian_h2.h
@@ -24,7 +24,7 @@
 #if defined( __linux__ ) || defined( __MINGW32__ )
 #include <endian.h>
 
-#elif defined( __FreeBSD__ )
+#elif defined( __FreeBSD__ ) || defined(__DragonFly__)
 #include <sys/endian.h>
 
 #elif defined( _WIN32 ) || defined( _WIN64 )
