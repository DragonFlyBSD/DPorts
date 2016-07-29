--- bloom.c.orig	2014-10-10 16:11:38.000000000 +0300
+++ bloom.c
@@ -43,7 +43,7 @@
 #endif 	/* __MINGW32__ */
 
 #include <stdlib.h>
-#if defined ( __APPLE__ ) || ( __FreeBSD__ )
+#if defined ( __APPLE__ ) || ( __FreeBSD__ ) || defined( __DragonFly__ )
 #include <stdint.h>
 #endif  /* __APPLE__ || __FreeBSD__ */
 #include <string.h>
