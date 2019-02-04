--- xbmc/linux/PlatformDefs.h.orig	2018-08-04 14:53:22.345556000 +0200
+++ xbmc/linux/PlatformDefs.h	2018-08-04 14:54:14.026675000 +0200
@@ -50,7 +50,7 @@
 #if defined(TARGET_DARWIN_OSX)
 #include <libkern/OSTypes.h>
 #endif
-#elif defined(TARGET_FREEBSD)
+#elif defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
 #include <stdio.h>
 #include <stdlib.h>
 #include <sys/sysctl.h>
@@ -166,7 +166,7 @@
 #define CALLBACK    __stdcall
 #define WINAPI      __stdcall
 #define WINAPIV     __cdecl
-#if !defined(TARGET_DARWIN) && !defined(TARGET_FREEBSD)
+#if !defined(TARGET_DARWIN) && !defined(TARGET_FREEBSD) && !defined(TARGET_DRAGONFLY)
 #define APIENTRY    WINAPI
 #else
 #define APIENTRY
@@ -331,12 +331,12 @@ typedef int (*LPTHREAD_START_ROUTINE)(vo
 #define _O_RDONLY O_RDONLY
 #define _O_WRONLY O_WRONLY
 
-#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD)
+#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
   #define stat64 stat
   #define __stat64 stat
   #define fstat64 fstat
   typedef int64_t off64_t;
-  #if defined(TARGET_FREEBSD)
+  #if defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
     #define statfs64 statfs
   #endif
 #else
