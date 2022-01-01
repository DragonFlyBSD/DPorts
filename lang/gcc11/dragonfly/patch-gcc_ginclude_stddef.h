 For USES=alias support.

--- gcc/ginclude/stddef.h.orig	2021-07-28 06:55:07 UTC
+++ gcc/ginclude/stddef.h
@@ -50,7 +50,7 @@ see the files COPYING3 and COPYING.RUNTI
 #include <machine/ansi.h>
 #endif
 
-#if defined (__FreeBSD__)
+#if defined (__FreeBSD__) && !defined(__DragonFly__)
 #include <sys/_types.h>
 #endif
 
@@ -290,7 +290,7 @@ typedef long ssize_t;
 typedef _BSD_RUNE_T_ rune_t;
 #define _BSD_WCHAR_T_DEFINED_
 #define _BSD_RUNE_T_DEFINED_	/* Darwin */
-#if defined (__FreeBSD__) && (__FreeBSD__ < 5)
+#if defined (__FreeBSD__) && (__FreeBSD__ < 5) && !defined(__DragonFly__)
 /* Why is this file so hard to maintain properly?  In contrast to
    the comment above regarding BSD/386 1.1, on FreeBSD for as long
    as the symbol has existed, _BSD_RUNE_T_ must not stay defined or
@@ -303,7 +303,7 @@ typedef _BSD_RUNE_T_ rune_t;
 /* FreeBSD 5 can't be handled well using "traditional" logic above
    since it no longer defines _BSD_RUNE_T_ yet still desires to export
    rune_t in some cases... */
-#if defined (__FreeBSD__) && (__FreeBSD__ >= 5)
+#if defined (__FreeBSD__) && (__FreeBSD__ >= 5) && !defined(__DragonFly__)
 #if !defined (_ANSI_SOURCE) && !defined (_POSIX_SOURCE)
 #if __BSD_VISIBLE
 #ifndef _RUNE_T_DECLARED
