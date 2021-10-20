--- sapi/litespeed/lsapilib.c.orig	2020-10-13 21:58:13 UTC
+++ sapi/litespeed/lsapilib.c
@@ -81,7 +81,7 @@ OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 #include <sys/prctl.h>
 #endif
 
-#if defined(__FreeBSD__ ) || defined(__NetBSD__) || defined(__OpenBSD__) \
+#if defined(__FreeBSD__ ) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__) \
     || defined(macintosh) || defined(__APPLE__) || defined(__APPLE_CC__)
 #include <sys/sysctl.h>
 #endif
@@ -348,7 +348,7 @@ static void lsapi_signal(int signo, sigh
 static int s_enable_core_dump = 0;
 static void lsapi_enable_core_dump(void)
 {
-#if defined(__FreeBSD__ ) || defined(__NetBSD__) || defined(__OpenBSD__) \
+#if defined(__FreeBSD__ ) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__) \
     || defined(macintosh) || defined(__APPLE__) || defined(__APPLE_CC__)
     int  mib[2];
     size_t len;
@@ -1024,7 +1024,7 @@ static int setUID_LVE(LSAPI_Request * pR
     //    return -1;
     //}
 
-#if defined(__FreeBSD__ ) || defined(__NetBSD__) || defined(__OpenBSD__) \
+#if defined(__FreeBSD__ ) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__) \
     || defined(macintosh) || defined(__APPLE__) || defined(__APPLE_CC__)
     if ( s_enable_core_dump )
         lsapi_enable_core_dump();
@@ -1937,7 +1937,7 @@ ssize_t LSAPI_Write_r( LSAPI_Request * p
 }
 
 
-#if defined(__FreeBSD__ ) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__ ) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 ssize_t gsendfile( int fdOut, int fdIn, off_t* off, size_t size )
 {
     ssize_t ret;
