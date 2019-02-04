--- src/posix/os-types.h~	2016-10-26 12:51:27.000000000 +0200
+++ src/posix/os-types.h	2019-02-03 20:51:24.236407000 +0100
@@ -36,7 +36,7 @@
 #include <string.h>
 #include <errno.h>
 #include <sys/time.h>
-#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__NetBSD__)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__) && !defined(__NetBSD__)
 #include <sys/prctl.h>
 #endif
 #include <pthread.h>
@@ -106,7 +106,7 @@ typedef LONG HRESULT;
 #ifdef TARGET_LINUX
 #include <limits.h>
 #define MAX_PATH PATH_MAX
-#elif defined TARGET_DARWIN || defined __FreeBSD__
+#elif defined TARGET_DARWIN || defined __FreeBSD__ || defined __DragonFly__
 #include <sys/syslimits.h>
 #define MAX_PATH PATH_MAX
 #else
@@ -127,7 +127,7 @@ typedef LONG HRESULT;
     #define statfs64 statfs
   #endif
   #define fstat64 fstat
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   #include <stdio.h> // for fpos_t
   typedef int64_t   off64_t;
   typedef off_t     __off_t;
