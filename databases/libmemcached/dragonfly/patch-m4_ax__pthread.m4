--- m4/ax_pthread.m4.orig	2014-02-09 11:52:42 UTC
+++ m4/ax_pthread.m4
@@ -269,7 +269,7 @@ if test "x$ax_pthread_ok" = xyes; then
         AC_MSG_CHECKING([if more special flags are required for pthreads])
         flag=no
         case ${host_os} in
-            aix* | freebsd* | darwin*) flag="-D_THREAD_SAFE";;
+            aix* | dragonfly* | freebsd* | darwin*) flag="-D_THREAD_SAFE";;
             osf* | hpux*) flag="-D_REENTRANT";;
             solaris*)
             if test "$GCC" = "yes"; then
