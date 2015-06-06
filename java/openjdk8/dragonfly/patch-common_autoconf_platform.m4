--- common/autoconf/platform.m4.orig	2015-06-06 06:33:23 UTC
+++ common/autoconf/platform.m4
@@ -117,7 +117,7 @@ AC_DEFUN([PLATFORM_EXTRACT_VARS_FROM_OS]
       VAR_OS_API=posix
       VAR_OS_ENV=macosx
       ;;
-    *bsd*)
+    *bsd*|*dragonfly*)
       VAR_OS=bsd
       VAR_OS_API=posix
       VAR_OS_ENV=bsd
