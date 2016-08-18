--- tools/openmp/runtime/src/kmp_ftn_entry.h.orig	2016-06-16 23:23:11.000000000 +0300
+++ tools/openmp/runtime/src/kmp_ftn_entry.h
@@ -419,7 +419,7 @@ xexpand(FTN_GET_THREAD_NUM)( void )
     #else
         int gtid;
 
-        #if KMP_OS_DARWIN || KMP_OS_FREEBSD || KMP_OS_NETBSD
+        #if KMP_OS_DARWIN || KMP_OS_FREEBSD || KMP_OS_NETBSD || KMP_OS_DRAGONFLY
             gtid = __kmp_entry_gtid();
         #elif KMP_OS_WINDOWS
             if (!__kmp_init_parallel ||
