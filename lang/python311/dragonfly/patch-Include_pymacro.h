--- Include/pymacro.h.orig	2022-07-16 12:36:13 UTC
+++ Include/pymacro.h
@@ -6,7 +6,7 @@
 // the static_assert() macro. Define the static_assert() macro in Python until
 // <sys/cdefs.h> suports C11:
 // https://bugs.freebsd.org/bugzilla/show_bug.cgi?id=255290
-#if defined(__FreeBSD__) && !defined(static_assert)
+#if (defined(__FreeBSD__) || defined(__DragonFly__)) && !defined(static_assert)
 #  define static_assert _Static_assert
 #endif
 
