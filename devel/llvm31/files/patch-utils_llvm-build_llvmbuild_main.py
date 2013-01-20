
$FreeBSD: ports/devel/llvm31/files/patch-utils_llvm-build_llvmbuild_main.py,v 1.1 2013/01/10 17:27:22 svnexp Exp $

--- utils/llvm-build/llvmbuild/main.py.orig
+++ utils/llvm-build/llvmbuild/main.py
@@ -633,7 +633,13 @@
 
     # We handle a few special cases of target names here for historical
     # reasons, as these are the names configure currently comes up with.
-    native_target_name = { 'x86' : 'X86',
+    native_target_name = { 'amd64' : 'X86',
+			   'arm' : 'ARM',
+			   'i386' : 'X86',
+			   'mips' : 'Mips',
+			   'powerpc' : 'PowerPC',
+			   'sparc64' : 'Sparc',
+                           'x86' : 'X86',
                            'x86_64' : 'X86',
                            'Unknown' : None }.get(opts.native_target,
                                                   opts.native_target)
