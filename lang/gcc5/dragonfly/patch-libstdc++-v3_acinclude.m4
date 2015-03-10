--- libstdc++-v3/acinclude.m4.orig	2015-01-29 18:36:03 UTC
+++ libstdc++-v3/acinclude.m4
@@ -1221,7 +1221,7 @@ AC_DEFUN([GLIBCXX_ENABLE_LIBSTDCXX_TIME]
         ac_has_nanosleep=yes
         ac_has_sched_yield=yes
         ;;
-      freebsd*|netbsd*)
+      freebsd*|netbsd*|dragonfly*)
         ac_has_clock_monotonic=yes
         ac_has_clock_realtime=yes
         ac_has_nanosleep=yes
