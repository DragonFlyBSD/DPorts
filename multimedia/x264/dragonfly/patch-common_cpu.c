--- common/cpu.c.orig	2022-06-01 22:31:50 UTC
+++ common/cpu.c
@@ -40,7 +40,7 @@
 #if SYS_BEOS
 #include <kernel/OS.h>
 #endif
-#if SYS_MACOSX || SYS_OPENBSD || SYS_FREEBSD
+#if SYS_MACOSX || SYS_OPENBSD || SYS_FREEBSD || SYS_DRAGONFLY
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #endif
@@ -465,7 +465,7 @@ int x264_cpu_num_processors( void )
     get_system_info( &info );
     return info.cpu_count;
 
-#elif SYS_MACOSX || SYS_FREEBSD
+#elif SYS_MACOSX || SYS_FREEBSD || SYS_DRAGONFLY
     int ncpu;
     size_t length = sizeof( ncpu );
     if( sysctlbyname("hw.ncpu", &ncpu, &length, NULL, 0) )
