--- m4/R.m4.orig	2016-03-16 23:02:06 UTC
+++ m4/R.m4
@@ -3984,7 +3984,7 @@ case "${host_os}" in
   darwin*)
     R_SYSTEM_ABI="osx"
     ;;
-  freebsd*)
+  dragonfly*|freebsd*)
     R_SYSTEM_ABI="freebsd"
     ;;
   *)
