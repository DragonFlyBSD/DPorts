--- Source/Core/Common/MemoryUtil.cpp.orig	2018-12-10 17:26:00 UTC
+++ Source/Core/Common/MemoryUtil.cpp
@@ -19,7 +19,7 @@
 #include <stdio.h>
 #include <sys/mman.h>
 #include <sys/types.h>
-#if defined __APPLE__ || defined __FreeBSD__ || defined __OpenBSD__
+#if defined __APPLE__ || defined __FreeBSD__ || defined __OpenBSD__ || defined __DragonFly__
 #include <sys/sysctl.h>
 #elif defined __HAIKU__
 #include <OS.h>
@@ -156,12 +156,14 @@ size_t MemPhysical()
   memInfo.dwLength = sizeof(MEMORYSTATUSEX);
   GlobalMemoryStatusEx(&memInfo);
   return memInfo.ullTotalPhys;
-#elif defined __APPLE__ || defined __FreeBSD__ || defined __OpenBSD__
+#elif defined __APPLE__ || defined __FreeBSD__ || defined __OpenBSD__ || defined __DragonFly__
   int mib[2];
   size_t physical_memory;
   mib[0] = CTL_HW;
 #ifdef __APPLE__
   mib[1] = HW_MEMSIZE;
+#elif defined __DragonFly__
+  mib[1] = HW_USERMEM;
 #elif defined __FreeBSD__
   mib[1] = HW_REALMEM;
 #elif defined __OpenBSD__
