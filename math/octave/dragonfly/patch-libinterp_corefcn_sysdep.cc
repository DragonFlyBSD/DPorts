--- libinterp/corefcn/sysdep.cc.orig	2016-04-20 18:23:56 UTC
+++ libinterp/corefcn/sysdep.cc
@@ -92,7 +92,8 @@ along with Octave; see the file COPYING.
 #define STDIN_FILENO 1
 #endif
 
-#if defined (__386BSD__) || defined (__FreeBSD__) || defined (__NetBSD__)
+#if defined (__386BSD__) || defined (__FreeBSD__) \
+ || defined (__NetBSD__) || defined (__DragonFly__)
 static void
 BSD_init (void)
 {
@@ -318,7 +319,7 @@ sysdep_init (void)
 #endif
 #endif
 
-#if defined (__386BSD__) || defined (__FreeBSD__) || defined (__NetBSD__)
+#if defined (__386BSD__) || defined (__FreeBSD__) || defined (__NetBSD__) || defined __DragonFly__
   BSD_init ();
 #elif defined (__MINGW32__)
   MINGW_init ();
