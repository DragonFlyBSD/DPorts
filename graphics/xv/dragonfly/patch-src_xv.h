--- src/xv.h.orig
+++ src/xv.h
@@ -164,7 +164,7 @@
 #endif
 
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <sys/param.h>
 #endif
 
@@ -184,7 +184,7 @@
 
 #ifndef VMS
 #  include <errno.h>
-#  if !defined(__NetBSD__) && !defined(__FreeBSD__)
+#  if !defined(__NetBSD__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #    if !(defined(__GLIBC__) && __GLIBC__ >= 2) && !defined(__OpenBSD__)
        extern int   errno;         /* SHOULD be in errno.h, but often isn't */
 #      ifndef XV_HAVE_SYSERRLISTDECL
@@ -1550,7 +1550,7 @@
 #  else
 #    ifndef LOCALE_NAME_EUC
 #      ifndef X_LOCALE
-#        if defined(__FreeBSD__)
+#        if defined(__FreeBSD__) || defined(__DragonFly__)
 	   char *localeList[] = {"", "ja_JP.EUC", "none", "none"};
 #        elif defined(__linux__)
 	   char *localeList[] = {"", "ja_JP.eucJP", "none", "ja_JP.SJIS"};
