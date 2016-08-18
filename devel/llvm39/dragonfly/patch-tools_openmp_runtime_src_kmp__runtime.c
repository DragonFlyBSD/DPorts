--- tools/openmp/runtime/src/kmp_runtime.c.orig	2016-07-08 17:53:24.000000000 +0300
+++ tools/openmp/runtime/src/kmp_runtime.c
@@ -7509,7 +7509,7 @@ __kmp_determine_reduction_method( ident_
 
         #if KMP_ARCH_X86_64 || KMP_ARCH_PPC64 || KMP_ARCH_AARCH64
 
-            #if KMP_OS_LINUX || KMP_OS_FREEBSD || KMP_OS_NETBSD || KMP_OS_WINDOWS || KMP_OS_DARWIN
+            #if KMP_OS_LINUX || KMP_OS_FREEBSD || KMP_OS_NETBSD || KMP_OS_DRAGONFLY || KMP_OS_WINDOWS || KMP_OS_DARWIN
 
 	    int teamsize_cutoff = 4;
 
