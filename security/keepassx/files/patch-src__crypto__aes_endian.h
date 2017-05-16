--- ./src/crypto/aes_endian.h.orig	2013-06-08 15:10:48.311186000 +0900
+++ ./src/crypto/aes_endian.h	2013-06-08 15:11:06.040949000 +0900
@@ -34,7 +34,7 @@
 /* Include files where endian defines and byteswap functions may reside */
 #if defined( __sun )
 #  include <sys/isa_defs.h>
-#elif defined( __FreeBSD__ ) || defined( __OpenBSD__ ) || defined( __NetBSD__ )
+#elif defined( __FreeBSD__ ) || defined(__DragonFly__) || defined( __OpenBSD__ ) || defined( __NetBSD__ )
 #  include <sys/endian.h>
 #elif defined( BSD ) && ( BSD >= 199103 ) || defined( __APPLE__ ) || \
       defined( __CYGWIN32__ ) || defined( __DJGPP__ ) || defined( __osf__ )
