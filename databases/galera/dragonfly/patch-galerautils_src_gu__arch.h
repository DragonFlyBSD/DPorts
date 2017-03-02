--- galerautils/src/gu_arch.h.orig	2014-03-27 17:49:30.000000000 +0200
+++ galerautils/src/gu_arch.h
@@ -41,7 +41,7 @@
 # error "Byte order not defined"
 #endif
 
-#if defined(__sun__)
+#if defined(__sun__) || defined(__DragonFly__)
 # define GU_WORDSIZE 64 /* Solaris 11 is only 64-bit ATM */
 #elif defined(__APPLE__) || defined(__FreeBSD__)
 # include <stdint.h>
