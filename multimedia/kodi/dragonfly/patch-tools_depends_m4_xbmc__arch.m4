--- tools/depends/m4/xbmc_arch.m4.orig
+++ tools/depends/m4/xbmc_arch.m4
@@ -17,6 +17,9 @@
   arm-apple-darwin*|aarch64-apple-darwin*)
      AC_SUBST(NATIVE_ARCH_DEFINES, "-DTARGET_POSIX -DTARGET_DARWIN -DTARGET_DARWIN_OSX")
      ;;
+  x86_64-*-dragonfly*)
+     AC_SUBST(NATIVE_ARCH_DEFINES, "-DTARGET_POSIX -DTARGET_DRAGONFLY")
+     ;;
   x86_64-apple-darwin*)
      AC_SUBST(NATIVE_ARCH_DEFINES, "-DTARGET_POSIX -DTARGET_DARWIN -DTARGET_DARWIN_OSX")
      ;;
@@ -48,6 +51,9 @@
   amd64-*-freebsd*)
      AC_SUBST(ARCH_DEFINES, "-DTARGET_POSIX -DTARGET_FREEBSD")
      ;;
+  x86_64-*-dragonfly*)
+     AC_SUBST(ARCH_DEFINES, "-DTARGET_POSIX -DTARGET_DRAGONFLY")
+     ;;
   aarch64-apple-darwin*)
      if test "$target_platform" = "macosx" ; then
         AC_SUBST(ARCH_DEFINES, "-DTARGET_POSIX -DTARGET_DARWIN -DTARGET_DARWIN_OSX")
