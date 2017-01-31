--- tools/openmp/runtime/src/kmp_runtime.cpp.orig	2016-12-15 01:01:24.000000000 +0200
+++ tools/openmp/runtime/src/kmp_runtime.cpp
@@ -7567,7 +7567,7 @@ __kmp_determine_reduction_method( ident_
 
         #if KMP_ARCH_X86_64 || KMP_ARCH_PPC64 || KMP_ARCH_AARCH64 || KMP_ARCH_MIPS64
 
-            #if KMP_OS_LINUX || KMP_OS_FREEBSD || KMP_OS_NETBSD || KMP_OS_WINDOWS || KMP_OS_DARWIN
+            #if KMP_OS_LINUX || KMP_OS_DRAGONFLY || KMP_OS_FREEBSD || KMP_OS_NETBSD || KMP_OS_WINDOWS || KMP_OS_DARWIN
 
 	    int teamsize_cutoff = 4;
 
