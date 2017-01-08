--- src/support/END.h.orig	2016-09-20 05:54:21.000000000 +0300
+++ src/support/END.h
@@ -33,7 +33,7 @@
  * $FreeBSD: src/sys/i386/include/asm.h,v 1.14 2007/08/22 04:26:07 jkoshy Exp $
  */
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__ELF__)
+#if defined(__linux__) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__ELF__)
 .size CNAME, . - CNAME
 #else
 #ifndef _MSC_VER
