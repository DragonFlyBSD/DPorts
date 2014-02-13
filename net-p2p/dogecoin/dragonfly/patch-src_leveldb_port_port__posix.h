--- src/leveldb/port/port_posix.h.orig	2014-01-28 02:04:37.000000000 +0000
+++ src/leveldb/port/port_posix.h
@@ -21,12 +21,11 @@
   #else
     #define PLATFORM_IS_LITTLE_ENDIAN false
   #endif
-#elif defined(OS_FREEBSD)
+#elif defined(OS_FREEBSD) || defined(OS_DRAGONFLYBSD)
   #include <sys/types.h>
   #include <sys/endian.h>
   #define PLATFORM_IS_LITTLE_ENDIAN (_BYTE_ORDER == _LITTLE_ENDIAN)
-#elif defined(OS_OPENBSD) || defined(OS_NETBSD) ||\
-      defined(OS_DRAGONFLYBSD)
+#elif defined(OS_OPENBSD) || defined(OS_NETBSD)
   #include <sys/types.h>
   #include <sys/endian.h>
 #elif defined(OS_HPUX)
