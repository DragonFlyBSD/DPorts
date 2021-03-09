--- smapi/h/typesize.h.orig	2020-04-22 12:18:38 UTC
+++ smapi/h/typesize.h
@@ -107,7 +107,7 @@ typedef unsigned long      ULONG;
 #endif
 #endif                                          /*  #if defined(__EMX__) */
 
-#if (defined(__linux__) && !(defined(__alpha) || defined(__X86_64__))) || (defined(__FreeBSD__)  && !(defined(__alpha) || defined(__X86_64__))) || defined(__NetBSD__)|| defined(__DJGPP__) || defined(__BEOS__) || defined(__OpenBSD__) || defined(__CYGWIN__) || defined(__QNXNTO__)
+#if (defined(__linux__) && !(defined(__alpha) || defined(__X86_64__))) || (defined(__FreeBSD__)  && !(defined(__alpha) || defined(__X86_64__))) || defined(__NetBSD__)|| defined(__DJGPP__) || defined(__BEOS__) || defined(__OpenBSD__) || defined(__CYGWIN__) || defined(__QNXNTO__) || defined(__DragonFly__)
 typedef   signed char       CHAR;               /*  1 byte */
 typedef unsigned char      UCHAR;               /*  1 byte */
 typedef   signed int        INT32;              /*  4 byte */
