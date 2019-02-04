--- lib/gtest/m4/acx_pthread.m4.orig	2018-08-04 11:45:05.722373000 +0200
+++ lib/gtest/m4/acx_pthread.m4	2018-08-04 11:45:31.382925000 +0200
@@ -219,7 +219,7 @@ if test "x$acx_pthread_ok" = xyes; then
         AC_MSG_CHECKING([if more special flags are required for pthreads])
         flag=no
         case "${host_cpu}-${host_os}" in
-            *-aix* | *-freebsd* | *-darwin*) flag="-D_THREAD_SAFE";;
+            *-aix* | *-freebsd* | *-dragonfly* | *-darwin*) flag="-D_THREAD_SAFE";;
             *solaris* | *-osf* | *-hpux*) flag="-D_REENTRANT";;
         esac
         AC_MSG_RESULT(${flag})
