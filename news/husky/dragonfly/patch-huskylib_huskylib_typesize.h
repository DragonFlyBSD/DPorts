--- huskylib/huskylib/typesize.h.orig	2010-03-19 00:37:17.000000000 +0000
+++ huskylib/huskylib/typesize.h
@@ -108,7 +108,7 @@ typedef          void       VOID;
 #endif
 #endif                                          /*  #if defined(__EMX__) */
 
-#if (defined(__linux__) && !(defined(__alpha) || defined(__X86_64__))) || (defined(__FreeBSD__)  && !(defined(__alpha) || defined(__X86_64__))) || defined(__NetBSD__)|| defined(__DJGPP__) || defined(__BEOS__) || defined(__OpenBSD__) || defined(__CYGWIN__) || defined(__QNXNTO__)
+#if (defined(__linux__) && !(defined(__alpha) || defined(__X86_64__))) || (defined(__FreeBSD__)  && !(defined(__alpha) || defined(__X86_64__))) || defined(__NetBSD__)|| defined(__DJGPP__) || defined(__BEOS__) || defined(__OpenBSD__) || defined(__CYGWIN__) || defined(__QNXNTO__) || defined(__DragonFly__)
 typedef   signed char       CHAR;               /*  1 byte */
 typedef unsigned char      UCHAR;               /*  1 byte */
 typedef   signed int        INT32;              /*  4 byte */
