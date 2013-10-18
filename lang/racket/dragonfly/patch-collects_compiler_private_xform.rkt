--- ../../collects/compiler/private/xform.rkt.orig	2013-08-09 22:38:27.000000000 +0000
+++ ../../collects/compiler/private/xform.rkt
@@ -894,7 +894,9 @@
                fread fwrite socket fcntl setsockopt connect send recv close
                __builtin_next_arg __builtin_saveregs 
                __builtin_constant_p
-               __builtin___CFStringMakeConstantString
+               __builtin_choose_expr
+	       __builtin_types_compatible_p
+	       __builtin___CFStringMakeConstantString
                __error __errno_location __toupper __tolower
                __attribute__ __mode__ ; not really functions in gcc
                __iob_func ; VC 8
