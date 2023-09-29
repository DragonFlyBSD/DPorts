--- m4/fptools_set_haskell_platform_vars.m4.orig	2023-05-25 23:03:00 UTC
+++ m4/fptools_set_haskell_platform_vars.m4
@@ -97,6 +97,9 @@ AC_DEFUN([FPTOOLS_SET_HASKELL_PLATFORM_V
         netbsd)
             test -z "[$]2" || eval "[$]2=OSNetBSD"
             ;;
+        dragonfly)
+            test -z "[$]2" || eval "[$]2=OSDragonFly"
+            ;;
         haiku)
             test -z "[$]2" || eval "[$]2=OSHaiku"
             ;;
