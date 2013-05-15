--- include/libiberty.h.orig	2006-06-01 14:57:47.000000000 +0000
+++ include/libiberty.h
@@ -97,7 +97,7 @@ extern void expandargv PARAMS ((int *, c
    to find the declaration so provide a fully prototyped one.  If it
    is 1, we found it so don't provide any declaration at all.  */
 #if !HAVE_DECL_BASENAME
-#if defined (__GNU_LIBRARY__ ) || defined (__linux__) || defined (__FreeBSD__) || defined (__OpenBSD__) || defined(__NetBSD__) || defined (__CYGWIN__) || defined (__CYGWIN32__) || defined (__MINGW32__) || defined (HAVE_DECL_BASENAME)
+#if defined (__GNU_LIBRARY__ ) || defined (__linux__) || defined (__FreeBSD__) || defined (__OpenBSD__) || defined(__NetBSD__) || defined (__CYGWIN__) || defined (__CYGWIN32__) || defined (__MINGW32__) || defined (HAVE_DECL_BASENAME) || defined(__DragonFly__)
 extern char *basename (const char *);
 #else
 /* Do not allow basename to be used if there is no prototype seen.  We
