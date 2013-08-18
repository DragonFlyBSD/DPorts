--- config/ltcf-c.sh.orig	2002-02-25 05:42:15.000000000 +0000
+++ config/ltcf-c.sh
@@ -403,7 +403,7 @@ else
     ;;
 
   # FreeBSD 3 and greater uses gcc -shared to do shared libraries.
-  freebsd*)
+  freebsd*|dragonfly*)
     archive_cmds='$CC -shared -o $lib $libobjs $deplibs $compiler_flags'
     hardcode_libdir_flag_spec='-R$libdir'
     hardcode_direct=yes
