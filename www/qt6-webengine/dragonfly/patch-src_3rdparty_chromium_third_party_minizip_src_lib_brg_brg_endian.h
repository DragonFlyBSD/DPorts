diff --git third_party/minizip/src/lib/brg/brg_endian.h third_party/minizip/src/lib/brg/brg_endian.h
index 9ef4af58030..ec51db6a952 100644
--- src/3rdparty/chromium/third_party/minizip/src/lib/brg/brg_endian.h
+++ src/3rdparty/chromium/third_party/minizip/src/lib/brg/brg_endian.h
@@ -27,7 +27,8 @@ Issue Date: 20/12/2007
 /* Include files where endian defines and byteswap functions may reside */
 #if defined( __sun )
 #  include <sys/isa_defs.h>
-#elif defined( __FreeBSD__ ) || defined( __OpenBSD__ ) || defined( __NetBSD__ )
+#elif defined( __FreeBSD__ ) || defined( __OpenBSD__ ) || defined( __NetBSD__ ) || \
+      defined(__DragonFly__)
 #  include <sys/endian.h>
 #elif defined( BSD ) && ( BSD >= 199103 ) || defined( __APPLE__ ) || \
       defined( __CYGWIN32__ ) || defined( __DJGPP__ ) || defined( __osf__ ) || \
