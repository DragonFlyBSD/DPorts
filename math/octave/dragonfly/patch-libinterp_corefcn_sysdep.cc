--- libinterp/corefcn/sysdep.cc.orig	2021-06-10 13:41:23.818543000 +0200
+++ libinterp/corefcn/sysdep.cc	2021-06-10 13:42:32.616974000 +0200
@@ -103,7 +103,7 @@
 
 namespace octave
 {
-#if defined (__386BSD__) || defined (__FreeBSD__) || defined (__NetBSD__)
+#if defined (__386BSD__) || defined (__FreeBSD__) || defined (__NetBSD__) || defined (__DragonFly__)
 
   static void
   BSD_init (void)
