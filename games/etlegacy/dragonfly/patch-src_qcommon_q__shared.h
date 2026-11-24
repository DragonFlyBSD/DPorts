--- src/qcommon/q_shared.h.orig
+++ src/qcommon/q_shared.h
@@ -327,7 +327,7 @@
 
 // the mac compiler can't handle >32k of locals, so we
 // just waste space and make big arrays static...
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 
 #ifdef __i386__
 #define CPUSTRING   "freebsd-i386"
