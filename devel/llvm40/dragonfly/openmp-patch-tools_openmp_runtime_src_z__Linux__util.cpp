--- tools/openmp/runtime/src/z_Linux_util.cpp.orig	2016-12-15 01:01:24.000000000 +0200
+++ tools/openmp/runtime/src/z_Linux_util.cpp
@@ -24,7 +24,7 @@
 #include "kmp_wait_release.h"
 #include "kmp_affinity.h"
 
-#if !KMP_OS_FREEBSD && !KMP_OS_NETBSD
+#if !KMP_OS_DRAGONFLY && !KMP_OS_FREEBSD && !KMP_OS_NETBSD
 # include <alloca.h>
 #endif
 #include <unistd.h>
@@ -52,7 +52,7 @@
 #elif KMP_OS_DARWIN
 # include <sys/sysctl.h>
 # include <mach/mach.h>
-#elif KMP_OS_FREEBSD
+#elif KMP_OS_DRAGONFLY || KMP_OS_FREEBSD
 # include <pthread_np.h>
 #endif
 
@@ -539,7 +539,7 @@ static kmp_int32
 __kmp_set_stack_info( int gtid, kmp_info_t *th )
 {
     int            stack_data;
-#if KMP_OS_LINUX || KMP_OS_FREEBSD || KMP_OS_NETBSD
+#if KMP_OS_LINUX || KMP_OS_DRAGONFLY || KMP_OS_FREEBSD || KMP_OS_NETBSD
     /* Linux* OS only -- no pthread_getattr_np support on OS X* */
     pthread_attr_t attr;
     int            status;
@@ -554,7 +554,7 @@ __kmp_set_stack_info( int gtid, kmp_info
         /* Fetch the real thread attributes */
         status = pthread_attr_init( &attr );
         KMP_CHECK_SYSFAIL( "pthread_attr_init", status );
-#if KMP_OS_FREEBSD || KMP_OS_NETBSD
+#if KMP_OS_DRAGONFLY || KMP_OS_FREEBSD || KMP_OS_NETBSD
         status = pthread_attr_get_np( pthread_self(), &attr );
         KMP_CHECK_SYSFAIL( "pthread_attr_get_np", status );
 #else
@@ -594,7 +594,7 @@ __kmp_launch_worker( void *thr )
     sigset_t    new_set, old_set;
 #endif /* KMP_BLOCK_SIGNALS */
     void *exit_val;
-#if KMP_OS_LINUX || KMP_OS_FREEBSD || KMP_OS_NETBSD
+#if KMP_OS_LINUX || KMP_OS_DRAGONFLY || KMP_OS_FREEBSD || KMP_OS_NETBSD
     void * volatile padding = 0;
 #endif
     int gtid;
@@ -645,7 +645,7 @@ __kmp_launch_worker( void *thr )
     KMP_CHECK_SYSFAIL( "pthread_sigmask", status );
 #endif /* KMP_BLOCK_SIGNALS */
 
-#if KMP_OS_LINUX || KMP_OS_FREEBSD || KMP_OS_NETBSD
+#if KMP_OS_LINUX || KMP_OS_DRAGONFLY || KMP_OS_FREEBSD || KMP_OS_NETBSD
     if ( __kmp_stkoffset > 0 && gtid > 0 ) {
         padding = KMP_ALLOCA( gtid * __kmp_stkoffset );
     }
@@ -1957,7 +1957,7 @@ __kmp_get_xproc( void ) {
 
     int r = 0;
 
-    #if KMP_OS_LINUX || KMP_OS_FREEBSD || KMP_OS_NETBSD
+    #if KMP_OS_LINUX || KMP_OS_DRAGONFLY || KMP_OS_FREEBSD || KMP_OS_NETBSD
 
         r = sysconf( _SC_NPROCESSORS_ONLN );
 
@@ -2240,9 +2240,9 @@ __kmp_is_address_mapped( void * addr ) {
             found = 1;
         }; // if
 
-    #elif KMP_OS_FREEBSD || KMP_OS_NETBSD
+    #elif KMP_OS_DRAGONFLY || KMP_OS_FREEBSD || KMP_OS_NETBSD
 
-        // FIXME(FreeBSD, NetBSD): Implement this
+        // FIXME(DragonFly, FreeBSD, NetBSD): Implement this
         found = 1;
 
     #else
