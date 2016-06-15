--- ckcdeb.h.orig	2010-08-23 16:30:56.000000000 +0300
+++ ckcdeb.h
@@ -4532,7 +4532,9 @@ extern int errno;
   following is an anachronism and should be the execption rather than the
   rule.
 */
+#ifndef __DragonFly__
 extern int errno;
+#endif
 #endif /* __GLIBC__ */
 #endif /* OS2 */
 #endif /* VMS */
