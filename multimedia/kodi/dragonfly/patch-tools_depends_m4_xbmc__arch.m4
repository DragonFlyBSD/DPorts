--- tools/depends/m4/xbmc_arch.m4.orig	2020-03-18 09:45:02 UTC
+++ tools/depends/m4/xbmc_arch.m4
@@ -14,6 +14,9 @@ case $build in
   amd64-*-freebsd*)
      AC_SUBST(NATIVE_ARCH_DEFINES, "-DTARGET_POSIX -DTARGET_FREEBSD")
      ;;
+  x86_64-*-dragonfly*)
+     AC_SUBST(NATIVE_ARCH_DEFINES, "-DTARGET_POSIX -DTARGET_DRAGONFLY")
+     ;;
   x86_64-apple-darwin*)
      AC_SUBST(NATIVE_ARCH_DEFINES, "-DTARGET_POSIX -DTARGET_DARWIN -DTARGET_DARWIN_OSX")
      ;;
@@ -45,6 +48,9 @@ case $host in
   amd64-*-freebsd*)
      AC_SUBST(ARCH_DEFINES, "-DTARGET_POSIX -DTARGET_FREEBSD")
      ;;
+  x86_64-*-dragonfly*)
+     AC_SUBST(ARCH_DEFINES, "-DTARGET_POSIX -DTARGET_DRAGONFLY")
+     ;;
   aarch64-apple-darwin*)
      AC_SUBST(ARCH_DEFINES, "-DTARGET_POSIX -DTARGET_DARWIN -DTARGET_DARWIN_EMBEDDED")
      ;;
