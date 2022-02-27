Allow visibility of strerror_l()

--- common/compat.c.orig	2021-06-03 05:46:25 UTC
+++ common/compat.c
@@ -41,7 +41,7 @@
  * This is excluded on SunOS due to it making the code compile in < XPG6 mode
  * which is not supported with a C99 compiler.
  */
-#ifndef __sun
+#if !defined(__sun) && !defined(__DragonFly__)
 #define _XOPEN_SOURCE 700
 #endif
 
@@ -873,7 +873,7 @@ getauxval (unsigned long type)
 		secure = __libc_enable_secure;
 
 #elif defined(HAVE_ISSETUGID) && \
-	!((defined __APPLE__ && defined __MACH__) || (defined __FreeBSD__))
+	!((defined __APPLE__ && defined __MACH__) || (defined __FreeBSD__) || (defined(__DragonFly__)))
 		secure = issetugid ();
 
 #elif defined(OS_UNIX)
