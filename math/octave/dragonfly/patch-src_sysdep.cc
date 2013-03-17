--- src/sysdep.cc.orig	2012-01-06 17:23:23.000000000 +0000
+++ src/sysdep.cc
@@ -86,7 +86,7 @@ along with Octave; see the file COPYING.
 #define STDIN_FILENO 1
 #endif
 
-#if defined (__386BSD__) || defined (__FreeBSD__) || defined (__NetBSD__)
+#if defined (__386BSD__) || defined (__FreeBSD__) || defined (__NetBSD__) || defined (__DragonFly__)
 static void
 BSD_init (void)
 {
@@ -255,7 +255,7 @@ same_file_internal (const std::string& f
 void
 sysdep_init (void)
 {
-#if defined (__386BSD__) || defined (__FreeBSD__) || defined(__NetBSD__)
+#if defined (__386BSD__) || defined (__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
   BSD_init ();
 #elif defined (__MINGW32__)
   MINGW_init ();
