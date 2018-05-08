--- midori/midori-websettings.c	2015-08-30 14:56:26.000000000 +0300
+++ midori/midori-websettings.c
@@ -28,7 +28,7 @@
 #if defined (G_OS_UNIX)
     #include <sys/utsname.h>
 #endif
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     #include <sys/types.h>
     #include <sys/sysctl.h>
 #endif
@@ -273,12 +273,16 @@ midori_web_settings_low_memory_profile (
     mem.dwLength = sizeof (mem);
     if (GlobalMemoryStatusEx (&mem))
         return mem.ullTotalPhys / 1024 / 1024 < 352;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     size_t size;
     int mem_total;
     size = sizeof mem_total;
 
+#if defined(__DragonFly__)
+    sysctlbyname("hw.physmem", &mem_total, &size, NULL, 0);
+#else
     sysctlbyname("hw.realmem", &mem_total, &size, NULL, 0);
+#endif
 
     return mem_total / 1048576 < 352;
 #else
