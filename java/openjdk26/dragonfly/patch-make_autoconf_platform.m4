--- make/autoconf/platform.m4.orig
+++ make/autoconf/platform.m4
@@ -206,11 +206,11 @@
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
