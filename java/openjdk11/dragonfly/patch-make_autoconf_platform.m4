--- make/autoconf/platform.m4.orig	2019-10-16 18:31:09 UTC
+++ make/autoconf/platform.m4
@@ -174,11 +174,11 @@ AC_DEFUN([PLATFORM_EXTRACT_VARS_FROM_OS]
       VAR_OS=macosx
       VAR_OS_TYPE=unix
       ;;
-    *bsd*)
+    *bsd*|*dragonfly*)
       VAR_OS=bsd
       VAR_OS_TYPE=unix
       case "$1" in
-        *freebsd*)
+        *freebsd*|*dragonfly*)
           VAR_OS_ENV=bsd.freebsd ;;
         *openbsd*)
           VAR_OS_ENV=bsd.openbsd ;;
