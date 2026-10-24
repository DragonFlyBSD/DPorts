--- common/cpu.c.orig	2026-08-13 20:46:48 UTC
+++ common/cpu.c
@@ -39,7 +39,7 @@
 #if SYS_BEOS
 #include <kernel/OS.h>
 #endif
-#if SYS_MACOSX || SYS_FREEBSD || SYS_NETBSD || SYS_OPENBSD
+#if SYS_MACOSX || SYS_FREEBSD || SYS_NETBSD || SYS_OPENBSD || SYS_DRAGONFLY
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #endif
@@ -658,7 +658,7 @@
     get_system_info( &info );
     return info.cpu_count;
 
-#elif SYS_MACOSX || SYS_FREEBSD
+#elif SYS_MACOSX || SYS_FREEBSD || SYS_DRAGONFLY
     int ncpu;
     size_t length = sizeof( ncpu );
     if( sysctlbyname("hw.ncpu", &ncpu, &length, NULL, 0) )
