--- common/autoconf/generated-configure.sh.intermediate	2015-05-13 12:58:20 UTC
+++ common/autoconf/generated-configure.sh
@@ -6779,7 +6779,7 @@ test -n "$target_alias" &&
       VAR_OS_API=posix
       VAR_OS_ENV=macosx
       ;;
-    *bsd*)
+    *bsd*|*dragonfly*)
       VAR_OS=bsd
       VAR_OS_API=posix
       VAR_OS_ENV=bsd
@@ -6910,7 +6910,7 @@ $as_echo "$OPENJDK_BUILD_OS-$OPENJDK_BUI
       VAR_OS_API=posix
       VAR_OS_ENV=macosx
       ;;
-    *bsd*)
+    *bsd*|*dragonfly*)
       VAR_OS=bsd
       VAR_OS_API=posix
       VAR_OS_ENV=bsd
@@ -29906,7 +29906,7 @@ fi
       PACKAGE_PATH=/usr/pkg
     fi
 
-    if test "`uname -s`" = "OpenBSD"; then
+    if test "`uname -s`" = "DragonFly"; then
       PACKAGE_PATH=/usr/local
     fi
   fi
@@ -35809,7 +35809,7 @@ $as_echo_n "checking for number of cores
     # Looks like a MacOSX system
     NUM_CORES=`/usr/sbin/system_profiler -detailLevel full SPHardwareDataType | grep 'Cores' | awk  '{print $5}'`
     FOUND_CORES=yes
-  elif test "x$OPENJDK_BUILD_OS" = xbsd && test "x$(uname -s | grep -o BSD)" = xBSD; then
+  elif test "x$OPENJDK_BUILD_OS" = xbsd; then
     # Looks like a BSD system
     NUM_CORES=`/sbin/sysctl -n hw.ncpu`
     FOUND_CORES=yes
@@ -35868,7 +35868,7 @@ $as_echo_n "checking for memory size...
     MEMORY_SIZE=`/usr/sbin/system_profiler -detailLevel full SPHardwareDataType | grep 'Memory' | awk  '{print $2}'`
     MEMORY_SIZE=`expr $MEMORY_SIZE \* 1024`
     FOUND_MEM=yes
-  elif test "x$OPENJDK_BUILD_OS" = xbsd && test "x$(uname -s | grep -o BSD)" = xBSD; then
+  elif test "x$OPENJDK_BUILD_OS" = xbsd; then
     # Looks like a BSD system
     MEMORY_SIZE=`/sbin/sysctl -n hw.physmem`
     MEMORY_SIZE=`expr $MEMORY_SIZE / 1024 / 1024`
