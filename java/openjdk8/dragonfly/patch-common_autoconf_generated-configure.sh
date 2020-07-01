--- common/autoconf/generated-configure.sh.orig	2020-04-15 02:42:06 UTC
+++ common/autoconf/generated-configure.sh
@@ -13613,7 +13613,7 @@ test -n "$target_alias" &&
       VAR_OS_API=posix
       VAR_OS_ENV=macosx
       ;;
-    *bsd*)
+    *bsd*|*dragonfly*)
       VAR_OS=bsd
       VAR_OS_API=posix
       VAR_OS_ENV=bsd
@@ -13646,7 +13646,7 @@ test -n "$target_alias" &&
     *netbsd*)
       VAR_OS_VENDOR=netbsd
       ;;
-    *freebsd*)
+    *freebsd*|*dragonfly*)
       VAR_OS_VENDOR=freebsd
       ;;
     *)
@@ -13767,7 +13767,7 @@ $as_echo "$OPENJDK_BUILD_OS-$OPENJDK_BUI
       VAR_OS_API=posix
       VAR_OS_ENV=macosx
       ;;
-    *bsd*)
+    *bsd*|*dragonfly*)
       VAR_OS=bsd
       VAR_OS_API=posix
       VAR_OS_ENV=bsd
@@ -13800,7 +13800,7 @@ $as_echo "$OPENJDK_BUILD_OS-$OPENJDK_BUI
     *netbsd*)
       VAR_OS_VENDOR=netbsd
       ;;
-    *freebsd*)
+    *freebsd*|*dragonfly*)
       VAR_OS_VENDOR=freebsd
       ;;
     *)
