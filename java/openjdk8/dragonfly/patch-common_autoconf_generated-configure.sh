--- common/autoconf/generated-configure.sh.orig	2021-01-20 00:41:17 UTC
+++ common/autoconf/generated-configure.sh
@@ -13616,7 +13616,7 @@ test -n "$target_alias" &&
       VAR_OS_API=posix
       VAR_OS_ENV=macosx
       ;;
-    *bsd*)
+    *bsd*|*dragonfly*)
       VAR_OS=bsd
       VAR_OS_API=posix
       VAR_OS_ENV=bsd
@@ -13649,7 +13649,7 @@ test -n "$target_alias" &&
     *netbsd*)
       VAR_OS_VENDOR=netbsd
       ;;
-    *freebsd*)
+    *freebsd*|*dragonfly*)
       VAR_OS_VENDOR=freebsd
       ;;
     *)
@@ -13770,7 +13770,7 @@ $as_echo "$OPENJDK_BUILD_OS-$OPENJDK_BUI
       VAR_OS_API=posix
       VAR_OS_ENV=macosx
       ;;
-    *bsd*)
+    *bsd*|*dragonfly*)
       VAR_OS=bsd
       VAR_OS_API=posix
       VAR_OS_ENV=bsd
@@ -13803,7 +13803,7 @@ $as_echo "$OPENJDK_BUILD_OS-$OPENJDK_BUI
     *netbsd*)
       VAR_OS_VENDOR=netbsd
       ;;
-    *freebsd*)
+    *freebsd*|*dragonfly*)
       VAR_OS_VENDOR=freebsd
       ;;
     *)
@@ -41437,7 +41437,7 @@ $as_echo "$ac_cv_c_bigendian" >&6; }
     else
       # Default works for linux, might work on other platforms as well.
       SHARED_LIBRARY_FLAGS='-shared'
-      SET_EXECUTABLE_ORIGIN='-Xlinker -rpath -Xlinker \$$$$ORIGIN$1'
+      SET_EXECUTABLE_ORIGIN='-Xlinker -z -Xlinker origin -Xlinker -rpath -Xlinker \$$$$ORIGIN$1'
       SET_SHARED_LIBRARY_ORIGIN="-Xlinker -z -Xlinker origin $SET_EXECUTABLE_ORIGIN"
       SET_SHARED_LIBRARY_NAME='-Xlinker -soname=$1'
       SET_SHARED_LIBRARY_MAPFILE='-Xlinker -version-script=$1'
