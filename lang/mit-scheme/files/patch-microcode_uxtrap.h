
$FreeBSD: ports/lang/mit-scheme/files/patch-microcode_uxtrap.h,v 1.1 2013/01/12 19:03:43 svnexp Exp $

--- microcode/uxtrap.h.orig
+++ microcode/uxtrap.h
@@ -413,6 +413,14 @@
 
 #endif /* __IA32__ */
 
+#ifdef __x86_64__
+ 
+#if defined(__FreeBSD__)
+#  include <ucontext.h>
+#endif
+
+#endif /* __x86_64__ */
+
 #ifdef __alpha
 
 #define HAVE_SIGCONTEXT
