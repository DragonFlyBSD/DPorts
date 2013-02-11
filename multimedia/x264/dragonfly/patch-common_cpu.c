--- common/cpu.c.intermediate	2013-02-11 11:38:10.713580000 +0100
+++ common/cpu.c	2013-02-11 11:49:43.302036000 +0100
@@ -35,7 +35,7 @@
 #if SYS_BEOS
 #include <kernel/OS.h>
 #endif
-#if SYS_MACOSX || SYS_FREEBSD
+#if SYS_MACOSX || SYS_FREEBSD || SYS_DRAGONFLY
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #endif
@@ -318,6 +318,13 @@
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
@@ -425,7 +432,7 @@
     get_system_info( &info );
     return info.cpu_count;
 
-#elif SYS_MACOSX || SYS_FREEBSD || SYS_OPENBSD
+#elif SYS_MACOSX || SYS_FREEBSD || SYS_OPENBSD || SYS_DRAGONFLY
     int ncpu;
     size_t length = sizeof( ncpu );
 #if SYS_OPENBSD
