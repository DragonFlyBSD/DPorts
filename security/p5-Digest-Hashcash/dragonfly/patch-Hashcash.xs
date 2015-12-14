--- Hashcash.xs.orig	2005-08-02 19:32:38.000000000 +0300
+++ Hashcash.xs
@@ -312,7 +312,7 @@ static char       nextenc[256];
 /* on machines that have /dev/urandom -- use it */
 
 #if defined( __linux__ ) || defined( __FreeBSD__ ) || defined( __MACH__ ) || \
-    defined( __OpenBSD__ ) || defined( DEV_URANDOM )
+    defined( __OpenBSD__ ) || defined(__DragonFly__) || defined( DEV_URANDOM )
 
 #define URANDOM_FILE "/dev/urandom"
 FILE* urandom = NULL;
