--- gcc/ginclude/stddef.h.orig	2011-01-29 22:15:52.000000000 +0000
+++ gcc/ginclude/stddef.h
@@ -1,5 +1,6 @@
 /* Copyright (C) 1989, 1997, 1998, 1999, 2000, 2002, 2004, 2009
    Free Software Foundation, Inc.
+   Copyright (C) 2010 John Marino <draco@marino.st>
 
 This file is part of GCC.
 
@@ -59,6 +60,10 @@ see the files COPYING3 and COPYING.RUNTI
 #include <sys/_types.h>
 #endif
 
+#if defined (__DragonFly__)
+#include <sys/types.h>
+#endif
+
 /* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
    defined if the corresponding type is *not* defined.
    FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
@@ -136,6 +141,7 @@ _TYPE_wchar_t;
 #ifndef _BSD_PTRDIFF_T_
 #ifndef ___int_ptrdiff_t_h
 #ifndef _GCC_PTRDIFF_T
+#ifndef _PTRDIFF_T_DECLARED /* DragonFly BSD */
 #define _PTRDIFF_T
 #define _T_PTRDIFF_
 #define _T_PTRDIFF
@@ -144,10 +150,12 @@ _TYPE_wchar_t;
 #define _BSD_PTRDIFF_T_
 #define ___int_ptrdiff_t_h
 #define _GCC_PTRDIFF_T
+#define _PTRDIFF_T_DECLARED
 #ifndef __PTRDIFF_TYPE__
 #define __PTRDIFF_TYPE__ long int
 #endif
 typedef __PTRDIFF_TYPE__ ptrdiff_t;
+#endif /* _PTRDFF_T_DECLARED */
 #endif /* _GCC_PTRDIFF_T */
 #endif /* ___int_ptrdiff_t_h */
 #endif /* _BSD_PTRDIFF_T_ */
@@ -179,7 +187,7 @@ typedef __PTRDIFF_TYPE__ ptrdiff_t;
 #ifndef _SIZE_T_DEFINED_
 #ifndef _SIZE_T_DEFINED
 #ifndef _BSD_SIZE_T_DEFINED_	/* Darwin */
-#ifndef _SIZE_T_DECLARED	/* FreeBSD 5 */
+#ifndef _SIZE_T_DECLARED	/* FreeBSD 5, also DragonFly */
 #ifndef ___int_size_t_h
 #ifndef _GCC_SIZE_T
 #ifndef _SIZET_
@@ -196,12 +204,13 @@ typedef __PTRDIFF_TYPE__ ptrdiff_t;
 #define _SIZE_T_DEFINED_
 #define _SIZE_T_DEFINED
 #define _BSD_SIZE_T_DEFINED_	/* Darwin */
-#define _SIZE_T_DECLARED	/* FreeBSD 5 */
+#define _SIZE_T_DECLARED	/* FreeBSD 5, DragonFly */
 #define ___int_size_t_h
 #define _GCC_SIZE_T
 #define _SIZET_
-#if defined (__FreeBSD__) && (__FreeBSD__ >= 5)
-/* __size_t is a typedef on FreeBSD 5!, must not trash it. */
+#if defined (__DragonFly__) || (defined (__FreeBSD__) && (__FreeBSD__ >= 5))
+/* __size_t is a typedef on FreeBSD 5!, must not trash it. 
+   __size_t is also defined in <machine/stdint.h> on DragonFly BSD */
 #else
 #define __size_t
 #endif
@@ -253,7 +262,7 @@ typedef long ssize_t;
 #ifndef _BSD_WCHAR_T_
 #ifndef _BSD_WCHAR_T_DEFINED_    /* Darwin */
 #ifndef _BSD_RUNE_T_DEFINED_	/* Darwin */
-#ifndef _WCHAR_T_DECLARED /* FreeBSD 5 */
+#ifndef _WCHAR_T_DECLARED /* FreeBSD 5, also DragonFly */
 #ifndef _WCHAR_T_DEFINED_
 #ifndef _WCHAR_T_DEFINED
 #ifndef _WCHAR_T_H
@@ -305,8 +314,10 @@ typedef _BSD_RUNE_T_ rune_t;
 #endif
 /* FreeBSD 5 can't be handled well using "traditional" logic above
    since it no longer defines _BSD_RUNE_T_ yet still desires to export
-   rune_t in some cases... */
-#if defined (__FreeBSD__) && (__FreeBSD__ >= 5)
+   rune_t in some cases... 
+   DragonFly BSD inherited this quirk from FreeBSD 4.8.
+*/
+#if defined (__DragonFly__) || (defined (__FreeBSD__) && (__FreeBSD__ >= 5))
 #if !defined (_ANSI_SOURCE) && !defined (_POSIX_SOURCE)
 #if __BSD_VISIBLE
 #ifndef _RUNE_T_DECLARED
