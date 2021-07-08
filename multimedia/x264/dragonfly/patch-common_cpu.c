--- common/cpu.c.orig	2021-07-08 15:16:18.278418000 +0200
+++ common/cpu.c	2021-07-08 15:18:15.115702000 +0200
@@ -467,7 +467,7 @@
     get_system_info( &info );
     return info.cpu_count;
 
-#elif SYS_MACOSX || SYS_FREEBSD
+#elif SYS_MACOSX || SYS_FREEBSD || SYS_DRAGONFLY
     int ncpu;
     size_t length = sizeof( ncpu );
     if( sysctlbyname("hw.ncpu", &ncpu, &length, NULL, 0) )
