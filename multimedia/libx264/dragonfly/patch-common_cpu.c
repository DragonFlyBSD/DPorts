--- common/cpu.c.intermediate	2014-12-10 14:10:58 UTC
+++ common/cpu.c
@@ -35,7 +35,7 @@
 #if SYS_BEOS
 #include <kernel/OS.h>
 #endif
-#if SYS_MACOSX || SYS_FREEBSD
+#if SYS_MACOSX || SYS_FREEBSD || SYS_DRAGONFLY
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #endif
@@ -338,6 +338,13 @@ uint32_t x264_cpu_detect( void )
     return cpu;
 }
 
+#elif SYS_DRAGONFLY
+
+uint32_t x264_cpu_detect( void )
+{
+    return 0;
+}
+
 #elif SYS_LINUX
 
 uint32_t x264_cpu_detect( void )
@@ -457,7 +464,7 @@ int x264_cpu_num_processors( void )
     get_system_info( &info );
     return info.cpu_count;
 
-#elif SYS_MACOSX || SYS_FREEBSD || SYS_OPENBSD
+#elif SYS_MACOSX || SYS_FREEBSD || SYS_OPENBSD || SYS_DRAGONFLY
     int ncpu;
     size_t length = sizeof( ncpu );
 #if SYS_OPENBSD
