--- src/engine/endian_h2.h.orig	2021-09-05 13:37:15 UTC
+++ src/engine/endian_h2.h
@@ -24,7 +24,7 @@
 #if defined( __linux__ )
 #include <endian.h>
 
-#elif defined( __FreeBSD__ ) || defined( __OpenBSD__ )
+#elif defined( __FreeBSD__ ) || defined( __OpenBSD__ ) || defined(__DragonFly__)
 #include <sys/endian.h>
 
 #elif defined( _WIN32 ) || defined( _WIN64 )
