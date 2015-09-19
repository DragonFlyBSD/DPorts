--- packages/clib/sha1/brg_endian.h.orig	2011-10-26 21:52:48.000000000 +0300
+++ packages/clib/sha1/brg_endian.h
@@ -39,7 +39,7 @@
 /* Include files where endian defines and byteswap functions may reside */
 #if defined(__sun__)
 #  include <sys/isa_defs.h>
-#elif defined( __FreeBSD__ ) || defined( __OpenBSD__ ) || defined( __NetBSD__ )
+#elif defined( __FreeBSD__ ) || defined(__DragonFly__) || defined( __OpenBSD__ ) || defined( __NetBSD__ )
 #  include <sys/endian.h>
 #elif defined( BSD ) && ( BSD >= 199103 ) || defined( __APPLE__ ) || \
       defined( __CYGWIN32__ ) || defined( __DJGPP__ ) || defined( __osf__ )
