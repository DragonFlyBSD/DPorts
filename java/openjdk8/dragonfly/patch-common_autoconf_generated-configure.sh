--- common/autoconf/generated-configure.sh.intermediate	2024-09-18 22:47:50 UTC
+++ common/autoconf/generated-configure.sh
@@ -13846,7 +13846,7 @@ test -n "$target_alias" &&
       VAR_OS_API=posix
       VAR_OS_ENV=macosx
       ;;
-    *bsd*)
+    *bsd*|*dragonfly*)
       VAR_OS=bsd
       VAR_OS_API=posix
       VAR_OS_ENV=bsd
@@ -13879,7 +13879,7 @@ test -n "$target_alias" &&
     *netbsd*)
       VAR_OS_VENDOR=netbsd
       ;;
-    *freebsd*)
+    *freebsd*|*dragonfly*)
       VAR_OS_VENDOR=freebsd
       ;;
     *)
@@ -14006,7 +14006,7 @@ $as_echo "$OPENJDK_BUILD_OS-$OPENJDK_BUI
       VAR_OS_API=posix
       VAR_OS_ENV=macosx
       ;;
-    *bsd*)
+    *bsd*|*dragonfly*)
       VAR_OS=bsd
       VAR_OS_API=posix
       VAR_OS_ENV=bsd
@@ -14039,7 +14039,7 @@ $as_echo "$OPENJDK_BUILD_OS-$OPENJDK_BUI
     *netbsd*)
       VAR_OS_VENDOR=netbsd
       ;;
-    *freebsd*)
+    *freebsd*|*dragonfly*)
       VAR_OS_VENDOR=freebsd
       ;;
     *)
@@ -42605,7 +42605,7 @@ $as_echo "$ac_cv_c_bigendian" >&6; }
     else
       # Default works for linux, might work on other platforms as well.
       SHARED_LIBRARY_FLAGS='-shared'
-      SET_EXECUTABLE_ORIGIN='-Xlinker -rpath -Xlinker \$$$$ORIGIN$1'
+      SET_EXECUTABLE_ORIGIN='-Xlinker -z -Xlinker origin -Xlinker -rpath -Xlinker \$$$$ORIGIN$1'
       SET_SHARED_LIBRARY_ORIGIN="-Xlinker -z -Xlinker origin $SET_EXECUTABLE_ORIGIN"
       SET_SHARED_LIBRARY_NAME='-Xlinker -soname=$1'
       SET_SHARED_LIBRARY_MAPFILE='-Xlinker -version-script=$1'
