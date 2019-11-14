--- rdmsr-freebsd.c.orig	2018-03-23 17:27:42 UTC
+++ rdmsr-freebsd.c
@@ -4,7 +4,7 @@
  *  FreeBSD Routines for reading MSRs.
  */
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 
 #define _LARGEFILE64_SOURCE
 #include <stdio.h>
