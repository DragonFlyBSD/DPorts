--- libinterp/corefcn/sysdep.cc.orig	2013-12-27 21:57:41.000000000 +0000
+++ libinterp/corefcn/sysdep.cc
@@ -88,7 +88,8 @@ along with Octave; see the file COPYING.
 #define STDIN_FILENO 1
 #endif
 
-#if defined (__386BSD__) || defined (__FreeBSD__) || defined (__NetBSD__)
+#if defined (__386BSD__) || defined (__FreeBSD__) \
+ || defined (__NetBSD__) || defined (__DragonFly__)
 static void
 BSD_init (void)
 {
@@ -256,7 +257,8 @@ same_file_internal (const std::string& f
 void
 sysdep_init (void)
 {
-#if defined (__386BSD__) || defined (__FreeBSD__) || defined (__NetBSD__)
+#if defined (__386BSD__) || defined (__FreeBSD__) \
+ || defined (__NetBSD__) || defined (__DragonFly__)
   BSD_init ();
 #elif defined (__MINGW32__)
   MINGW_init ();
