--- common/autoconf/platform.m4.orig	2014-07-08 03:28:31.932365000 +0000
+++ common/autoconf/platform.m4	2014-07-08 03:35:07.029037000 +0000
@@ -111,7 +111,7 @@ AC_DEFUN([PLATFORM_EXTRACT_VARS_FROM_OS]
       VAR_OS_API=posix
       VAR_OS_ENV=macosx
       ;;
-    *bsd*)
+    *bsd*|*dragonfly*)
       VAR_OS=bsd
       VAR_OS_API=posix
       VAR_OS_ENV=bsd
