--- libinterp/corefcn/sysdep.cc.orig	2022-04-06 14:05:12 UTC
+++ libinterp/corefcn/sysdep.cc
@@ -105,7 +105,7 @@
 
 OCTAVE_NAMESPACE_BEGIN
 
-#if defined (__386BSD__) || defined (__FreeBSD__) || defined (__NetBSD__)
+#if defined (__386BSD__) || defined (__FreeBSD__) || defined (__NetBSD__) || defined (__DragonFly__)
 
   static void
   BSD_init (void)
@@ -515,7 +515,7 @@ On non-Windows platforms, this function
     omp_get_num_threads ();
 #endif
 
-#if defined (__386BSD__) || defined (__FreeBSD__) || defined (__NetBSD__)
+#if defined (__386BSD__) || defined (__FreeBSD__) || defined (__NetBSD__) || defined (__DragonFly__)
     BSD_init ();
 #elif defined (__MINGW32__)
     MINGW_init ();
