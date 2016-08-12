--- ../../src/target.h.orig	2002-01-08 22:13:59.000000000 +0200
+++ ../../src/target.h
@@ -126,7 +126,7 @@
 #elif defined(sequent) || defined(_sequent) || defined(__sequent) || \
       defined(__sequent__) || defined(SEQUENT) || defined(_SEQUENT_)
 #define SYSTEM SYSTEM_DYNIX
-#elif defined(__FreeBSD) || defined(__FreeBSD__)
+#elif defined(__FreeBSD) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define SYSTEM SYSTEM_FREEBSD
 #elif defined(hpux) || defined(_hpux) || defined(__hpux) || defined(__hpux__)
 #define SYSTEM SYSTEM_HPUX
