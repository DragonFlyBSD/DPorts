--- common/cpu.c.orig	2021-06-13 12:43:57 UTC
+++ common/cpu.c	2021-07-08 15:18:15.115702000 +0200
@@ -33,7 +33,7 @@
 #if SYS_BEOS
 #include <kernel/OS.h>
 #endif
-#if SYS_MACOSX || SYS_FREEBSD
+#if SYS_MACOSX || SYS_FREEBSD || SYS_DRAGONFLY
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #endif
@@ -460,7 +460,7 @@ int x264_cpu_num_processors( void )
     get_system_info( &info );
     return info.cpu_count;
 
-#elif SYS_MACOSX || SYS_FREEBSD
+#elif SYS_MACOSX || SYS_FREEBSD || SYS_DRAGONFLY
     int ncpu;
     size_t length = sizeof( ncpu );
     if( sysctlbyname("hw.ncpu", &ncpu, &length, NULL, 0) )
