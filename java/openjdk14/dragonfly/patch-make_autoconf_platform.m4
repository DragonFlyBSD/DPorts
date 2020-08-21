--- make/autoconf/platform.m4.orig	2020-07-16 04:03:40 UTC
+++ make/autoconf/platform.m4
@@ -180,11 +180,11 @@ AC_DEFUN([PLATFORM_EXTRACT_VARS_FROM_OS]
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
