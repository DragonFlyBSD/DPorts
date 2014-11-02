--- gcc/ginclude/stddef.h.orig	2013-01-10 20:38:27.000000000 +0000
+++ gcc/ginclude/stddef.h
@@ -50,10 +50,15 @@ see the files COPYING3 and COPYING.RUNTI
    one less case to deal with in the following.  */
 #if defined (__BSD_NET2__) || defined (____386BSD____) || (defined (__FreeBSD__) && (__FreeBSD__ < 5)) || defined(__NetBSD__)
 #include <machine/ansi.h>
+#if !defined(_MACHINE_ANSI_H_)
+#if defined(_I386_ANSI_H_) || defined(_X86_64_ANSI_H_)
+#define _MACHINE_ANSI_H_
 #endif
-/* On FreeBSD 5, machine/ansi.h does not exist anymore... */
-#if defined (__FreeBSD__) && (__FreeBSD__ >= 5)
-#include <sys/_types.h>
+#endif
+#endif
+
+#if defined(__DragonFly__)
+#include <sys/types.h>
 #endif
 
 /* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
@@ -133,6 +138,7 @@ _TYPE_wchar_t;
 #ifndef _BSD_PTRDIFF_T_
 #ifndef ___int_ptrdiff_t_h
 #ifndef _GCC_PTRDIFF_T
+#ifndef _PTRDIFF_T_DECLARED /* DragonFly */
 #define _PTRDIFF_T
 #define _T_PTRDIFF_
 #define _T_PTRDIFF
@@ -141,10 +147,12 @@ _TYPE_wchar_t;
 #define _BSD_PTRDIFF_T_
 #define ___int_ptrdiff_t_h
 #define _GCC_PTRDIFF_T
+#define _PTRDIFF_T_DECLARED
 #ifndef __PTRDIFF_TYPE__
 #define __PTRDIFF_TYPE__ long int
 #endif
 typedef __PTRDIFF_TYPE__ ptrdiff_t;
+#endif /* _PTRDIFF_T_DECLARED */
 #endif /* _GCC_PTRDIFF_T */
 #endif /* ___int_ptrdiff_t_h */
 #endif /* _BSD_PTRDIFF_T_ */
@@ -198,6 +206,7 @@ typedef __PTRDIFF_TYPE__ ptrdiff_t;
 #define _GCC_SIZE_T
 #define _SIZET_
 #if (defined (__FreeBSD__) && (__FreeBSD__ >= 5)) \
+  || defined(__DragonFly__) \
   || defined(__FreeBSD_kernel__)
 /* __size_t is a typedef on FreeBSD 5, must not trash it. */
 #elif defined (__VMS__)
@@ -306,7 +315,7 @@ typedef _BSD_RUNE_T_ rune_t;
 /* FreeBSD 5 can't be handled well using "traditional" logic above
    since it no longer defines _BSD_RUNE_T_ yet still desires to export
    rune_t in some cases... */
-#if defined (__FreeBSD__) && (__FreeBSD__ >= 5)
+#if defined (__DragonFly__) || (defined (__FreeBSD__) && (__FreeBSD__ >= 5))
 #if !defined (_ANSI_SOURCE) && !defined (_POSIX_SOURCE)
 #if __BSD_VISIBLE
 #ifndef _RUNE_T_DECLARED
