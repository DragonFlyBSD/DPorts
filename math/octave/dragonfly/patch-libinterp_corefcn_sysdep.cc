--- libinterp/corefcn/sysdep.cc.orig	2023-05-03 12:41:23.424689000 +0200
+++ libinterp/corefcn/sysdep.cc	2023-05-03 12:41:48.785113000 +0200
@@ -105,7 +105,7 @@
 
 OCTAVE_BEGIN_NAMESPACE(octave)
 
-#if defined (__386BSD__) || defined (__FreeBSD__) || defined (__NetBSD__)
+#if defined (__386BSD__) || defined(__DragonFly__) || defined (__FreeBSD__) || defined (__NetBSD__)
 
 static void
 BSD_init (void)
@@ -515,7 +515,7 @@
   omp_get_num_threads ();
 #endif
 
-#if defined (__386BSD__) || defined (__FreeBSD__) || defined (__NetBSD__)
+#if defined (__386BSD__) || defined(__DragonFly__) || defined (__FreeBSD__) || defined (__NetBSD__)
   BSD_init ();
 #elif defined (__MINGW32__)
   MINGW_init ();
