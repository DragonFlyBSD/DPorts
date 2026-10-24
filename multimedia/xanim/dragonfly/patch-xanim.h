--- xanim.h.orig	1999-03-21 22:36:26 UTC
+++ xanim.h
@@ -31,7 +31,7 @@
 #include <sys/malloc.h>
 #else
 #ifndef __CYGWIN32__
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <malloc.h>
 #endif
 #endif
