--- acinclude.m4.orig	2015-05-18 17:28:09.000000000 +0300
+++ acinclude.m4
@@ -40,7 +40,7 @@ case "$host_os" in
         ;;
     esac
   ;;
-  kfreebsd* | freebsd* | netbsd* | openbsd*)
+  kfreebsd* | freebsd* | netbsd* | openbsd* | dragonfly*)
     if echo __ELF__ | $CC -E - | grep __ELF__ > /dev/null; then
       objfmt='BSD-a.out'
     else
