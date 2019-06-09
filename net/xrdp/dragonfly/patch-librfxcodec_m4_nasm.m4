--- librfxcodec/m4/nasm.m4.intermediate	2019-06-08 19:00:38.000000000 +0000
+++ librfxcodec/m4/nasm.m4
@@ -40,7 +40,7 @@ case "$host_os" in
         ;;
     esac
   ;;
-  kfreebsd* | freebsd* | netbsd* | openbsd*)
+  kfreebsd* | freebsd* | netbsd* | openbsd* | dragonfly*)
     if echo __ELF__ | $CC -E - | grep __ELF__ > /dev/null; then
       objfmt='BSD-a.out'
     else
