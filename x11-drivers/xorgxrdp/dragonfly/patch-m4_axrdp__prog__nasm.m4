--- m4/axrdp_prog_nasm.m4.orig
+++ m4/axrdp_prog_nasm.m4
@@ -40,7 +40,7 @@
         ;;
     esac
   ;;
-  kfreebsd* | freebsd* | netbsd* | openbsd*)
+  kfreebsd* | freebsd* | netbsd* | openbsd* | dragonfly*)
     if echo __ELF__ | $CC -E - | grep __ELF__ > /dev/null; then
       objfmt='BSD-a.out'
     else
