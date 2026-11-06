--- osdep.c.orig	2024-04-29 15:47:02 UTC
+++ osdep.c
@@ -32,7 +32,7 @@
 #include <windows.h>
 #endif
 
-#if defined(__macosx__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__macosx__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__)
     #include <sys/param.h>
     #include <sys/mount.h>
 #elif defined(__NetBSD__)
@@ -51,7 +51,7 @@
     #include <datatypes/textclass.h>
 #endif
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__) || defined(__NetBSD__)
 #include <stdlib.h>
 #include <stdio.h>
 #endif
@@ -116,7 +116,7 @@ void GFX2_OpenURL(const char * buffer, unsigned int le
   if (ret != noErr)
     GFX2_Log(GFX2_ERROR, "LSOpenCFURLRef() returned %d\n", ret);
   CFRelease(url);
-#elif defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__) || defined(__NetBSD__)
   int ret;
   char command[256]; // use the xdg-open command to open the url in the default browser
   (void)len;
@@ -150,7 +150,7 @@ qword GFX2_DiskFreeSpace(const char * path)
     GFX2_Log(GFX2_ERROR, "GetDiskFreeSpaceExA() failed\n");
     return 0;
   }
-#elif defined(__linux__) || defined(__macosx__) || defined(__FreeBSD__) || defined(__SYLLABLE__) || defined(__AROS__) || defined(__OpenBSD__)
+#elif defined(__linux__) || defined(__macosx__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__SYLLABLE__) || defined(__AROS__) || defined(__OpenBSD__)
   struct statfs disk_info;
   statfs(path ,&disk_info);
   return (qword) disk_info.f_bfree * (qword) disk_info.f_bsize;
@@ -177,7 +177,7 @@ qword GFX2_DiskFreeSpace(const char * path)
 #endif
 }
 
-#if defined(__macosx__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__SWITCH__)
+#if defined(__macosx__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__SWITCH__)
   #if defined(__OpenBSD__)
   #include <sys/param.h>
   #endif
@@ -239,7 +239,7 @@ unsigned long Memory_free(void)
   GlobalMemoryStatus(&mstt);
   return mstt.dwAvailPhys;
 #endif
-#elif defined(__macosx__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#elif defined(__macosx__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__OpenBSD__)
   int mib[2];
   int maxmem;
   size_t len;
