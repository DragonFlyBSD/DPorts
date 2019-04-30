--- libinterp/corefcn/sysdep.cc.intermediate	2019-04-29 12:53:15 UTC
+++ libinterp/corefcn/sysdep.cc
@@ -92,7 +92,7 @@ along with Octave; see the file COPYING.
 #  define STDIN_FILENO 1
 #endif
 
-#if defined (__386BSD__) || defined (__FreeBSD__) || defined (__NetBSD__)
+#if defined (__386BSD__) || defined (__FreeBSD__) || defined (__NetBSD__) || defined (__DragonFly__)
 static void
 BSD_init (void)
 {
@@ -337,7 +337,7 @@ namespace octave
     omp_get_num_threads ();
 #endif
 
-#if defined (__386BSD__) || defined (__FreeBSD__) || defined (__NetBSD__)
+#if defined (__386BSD__) || defined (__FreeBSD__) || defined (__NetBSD__) || defined (__DragonFly__)
     BSD_init ();
 #elif defined (__MINGW32__)
     MINGW_init ();
