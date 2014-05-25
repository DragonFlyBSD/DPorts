--- pdns/aes/brg_endian.h.orig	2014-05-23 23:11:53.651273000 +0100
+++ pdns/aes/brg_endian.h	2014-05-23 23:12:33.501276000 +0100
@@ -34,7 +34,8 @@
 /* Include files where endian defines and byteswap functions may reside */
 #if defined( __sun )
 #  include <sys/isa_defs.h>
-#elif defined( __FreeBSD__ ) || defined( __OpenBSD__ ) || defined( __NetBSD__ )
+#elif defined( __FreeBSD__ ) || defined( __DragonFly__ ) || defined( __OpenBSD__ ) \
+   || defined( __NetBSD__ )
 #  include <sys/endian.h>
 #elif defined( BSD ) && ( BSD >= 199103 ) || defined( __APPLE__ ) || \
       defined( __CYGWIN32__ ) || defined( __DJGPP__ ) || defined( __osf__ )
