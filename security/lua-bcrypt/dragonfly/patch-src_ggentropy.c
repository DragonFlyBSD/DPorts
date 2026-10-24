--- src/ggentropy.c.orig
+++ src/ggentropy.c
@@ -25,7 +25,7 @@
 #elif defined( __APPLE__ )
 #  define PLATFORM_HAS_ARC4RANDOM 1
 
-#elif defined( __FreeBSD__ ) || defined( __OpenBSD__ ) || defined( __NetBSD__ )
+#elif defined( __FreeBSD__ ) || defined( __OpenBSD__ ) || defined( __NetBSD__ ) || defined( __DragonFly__ )
 #  define PLATFORM_HAS_ARC4RANDOM 1
 
 #else
