--- common/autoconf/build-performance.m4.orig	2015-06-06 06:33:23 UTC
+++ common/autoconf/build-performance.m4
@@ -41,7 +41,7 @@ AC_DEFUN([BPERF_CHECK_CORES],
     # Looks like a MacOSX system
     NUM_CORES=`/usr/sbin/system_profiler -detailLevel full SPHardwareDataType | grep 'Cores' | awk  '{print [$]5}'`
     FOUND_CORES=yes
-  elif test "x$OPENJDK_BUILD_OS" = xbsd && test "x$(uname -s | grep -o BSD)" = xBSD; then
+  elif test "x$OPENJDK_BUILD_OS" = xbsd; then
     # Looks like a BSD system
     NUM_CORES=`/sbin/sysctl -n hw.ncpu`
     FOUND_CORES=yes
@@ -83,7 +83,7 @@ AC_DEFUN([BPERF_CHECK_MEMORY_SIZE],
     MEMORY_SIZE=`/usr/sbin/system_profiler -detailLevel full SPHardwareDataType | grep 'Memory' | awk  '{print [$]2}'`
     MEMORY_SIZE=`expr $MEMORY_SIZE \* 1024`
     FOUND_MEM=yes
-  elif test "x$OPENJDK_BUILD_OS" = xbsd && test "x$(uname -s | grep -o BSD)" = xBSD; then
+  elif test "x$OPENJDK_BUILD_OS" = xbsd; then
     # Looks like a BSD system
     MEMORY_SIZE=`/sbin/sysctl -n hw.physmem`
     MEMORY_SIZE=`expr $MEMORY_SIZE / 1024 / 1024`
