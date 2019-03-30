--- m4/nasm.m4.orig	2018-12-12 01:16:08 UTC
+++ m4/nasm.m4
@@ -40,7 +40,7 @@ case "$host_os" in
         ;;
     esac
   ;;
-  kfreebsd* | freebsd* | netbsd* | openbsd*)
+  kfreebsd* | freebsd* | netbsd* | openbsd* | dragonfly*)
     if echo __ELF__ | $CC -E - | grep __ELF__ > /dev/null; then
       objfmt='BSD-a.out'
     else
