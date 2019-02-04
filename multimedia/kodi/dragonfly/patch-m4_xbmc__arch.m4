--- m4/xbmc_arch.m4.orig	2018-08-04 11:22:37.953377000 +0200
+++ m4/xbmc_arch.m4	2018-08-04 11:49:38.208237000 +0200
@@ -14,6 +14,9 @@ case $build in
   amd64-*-freebsd*)
      AC_SUBST(NATIVE_ARCH_DEFINES, "-DTARGET_POSIX -DTARGET_FREEBSD -D_LINUX")
      ;;
+  x86_64-*-dragonfly*)
+     AC_SUBST(NATIVE_ARCH_DEFINES, "-DTARGET_POSIX -DTARGET_DRAGONFLY -D_LINUX")
+     ;;
   armv*-*-freebsd*)
      AC_SUBST(NATIVE_ARCH_DEFINES, "-DTARGET_POSIX -DTARGET_FREEBSD -D_LINUX")
      ;;
@@ -48,6 +51,9 @@ case $host in
   amd64-*-freebsd*)
      AC_SUBST(ARCH_DEFINES, "-DTARGET_POSIX -DTARGET_FREEBSD -D_LINUX")
      ;;
+  x86_64-*-dragonfly*)
+     AC_SUBST(ARCH_DEFINES, "-DTARGET_POSIX -DTARGET_DRAGONFLY -D_LINUX")
+     ;;
   armv*-*-freebsd*)
      AC_SUBST(ARCH_DEFINES, "-DTARGET_POSIX -DTARGET_FREEBSD -D_LINUX")
      ;;
