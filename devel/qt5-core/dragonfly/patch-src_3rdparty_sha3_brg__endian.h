--- src/3rdparty/sha3/brg_endian.h.orig	2018-12-03 11:15:26 UTC
+++ src/3rdparty/sha3/brg_endian.h
@@ -34,7 +34,7 @@ Changes for ARM 9/9/2010 [Downstream rel
 /* Include files where endian defines and byteswap functions may reside */
 #if defined( __sun )
 #  include <sys/isa_defs.h>
-#elif defined( __FreeBSD__ ) || defined( __OpenBSD__ ) || defined( __NetBSD__ )
+#elif defined( __FreeBSD__ ) || defined( __OpenBSD__ ) || defined( __NetBSD__ ) || defined(__DragonFly__)
 #  include <sys/endian.h>
 #elif defined( BSD ) && ( BSD >= 199103 ) || defined( __APPLE__ ) || \
       defined( __CYGWIN32__ ) || defined( __DJGPP__ ) || defined( __osf__ )
