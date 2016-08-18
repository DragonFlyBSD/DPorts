--- tools/openmp/runtime/src/z_Linux_util.c.orig	2016-06-22 19:35:12.000000000 +0300
+++ tools/openmp/runtime/src/z_Linux_util.c
@@ -23,7 +23,7 @@
 #include "kmp_stats.h"
 #include "kmp_wait_release.h"
 
-#if !KMP_OS_FREEBSD && !KMP_OS_NETBSD
+#if !KMP_OS_FREEBSD && !KMP_OS_NETBSD && !KMP_OS_DRAGONFLY
 # include <alloca.h>
 #endif
 #include <unistd.h>
@@ -51,7 +51,7 @@
 #elif KMP_OS_DARWIN
 # include <sys/sysctl.h>
 # include <mach/mach.h>
-#elif KMP_OS_FREEBSD
+#elif KMP_OS_FREEBSD || KMP_OS_DRAGONFLY
 # include <pthread_np.h>
 #endif
 
@@ -630,7 +630,7 @@ static kmp_int32
 __kmp_set_stack_info( int gtid, kmp_info_t *th )
 {
     int            stack_data;
-#if KMP_OS_LINUX || KMP_OS_FREEBSD || KMP_OS_NETBSD
+#if KMP_OS_LINUX || KMP_OS_FREEBSD || KMP_OS_NETBSD || KMP_OS_DRAGONFLY
     /* Linux* OS only -- no pthread_getattr_np support on OS X* */
     pthread_attr_t attr;
     int            status;
@@ -645,7 +645,7 @@ __kmp_set_stack_info( int gtid, kmp_info
         /* Fetch the real thread attributes */
         status = pthread_attr_init( &attr );
         KMP_CHECK_SYSFAIL( "pthread_attr_init", status );
-#if KMP_OS_FREEBSD || KMP_OS_NETBSD
+#if KMP_OS_FREEBSD || KMP_OS_NETBSD || KMP_OS_DRAGONFLY
         status = pthread_attr_get_np( pthread_self(), &attr );
         KMP_CHECK_SYSFAIL( "pthread_attr_get_np", status );
 #else
@@ -685,7 +685,7 @@ __kmp_launch_worker( void *thr )
     sigset_t    new_set, old_set;
 #endif /* KMP_BLOCK_SIGNALS */
     void *exit_val;
-#if KMP_OS_LINUX || KMP_OS_FREEBSD || KMP_OS_NETBSD
+#if KMP_OS_LINUX || KMP_OS_FREEBSD || KMP_OS_NETBSD || KMP_OS_DRAGONFLY
     void * volatile padding = 0;
 #endif
     int gtid;
@@ -736,7 +736,7 @@ __kmp_launch_worker( void *thr )
     KMP_CHECK_SYSFAIL( "pthread_sigmask", status );
 #endif /* KMP_BLOCK_SIGNALS */
 
-#if KMP_OS_LINUX || KMP_OS_FREEBSD || KMP_OS_NETBSD
+#if KMP_OS_LINUX || KMP_OS_FREEBSD || KMP_OS_NETBSD || KMP_OS_DRAGONFLY
     if ( __kmp_stkoffset > 0 && gtid > 0 ) {
         padding = KMP_ALLOCA( gtid * __kmp_stkoffset );
     }
@@ -2018,7 +2018,7 @@ __kmp_get_xproc( void ) {
 
     int r = 0;
 
-    #if KMP_OS_LINUX || KMP_OS_FREEBSD || KMP_OS_NETBSD
+    #if KMP_OS_LINUX || KMP_OS_FREEBSD || KMP_OS_NETBSD || KMP_OS_DRAGONFLY
 
         r = sysconf( _SC_NPROCESSORS_ONLN );
 
@@ -2287,7 +2287,7 @@ __kmp_is_address_mapped( void * addr ) {
             found = 1;
         }; // if
 
-    #elif KMP_OS_FREEBSD || KMP_OS_NETBSD
+    #elif KMP_OS_FREEBSD || KMP_OS_NETBSD || KMP_OS_DRAGONFLY
 
         // FIXME(FreeBSD, NetBSD): Implement this
         found = 1;
