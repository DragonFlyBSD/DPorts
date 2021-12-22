--- cado.h.orig	2021-09-16 01:25:08 UTC
+++ cado.h
@@ -51,7 +51,7 @@ Foundation, Inc., 51 Franklin Street, Fi
  * OpenBSD 4.9 appears at least to grok _BSD_SOURCE as I expect (i.e.
  * _do_ expose BSD prototypes as an _addition_ to the rest).
  */
-#ifdef __OpenBSD__
+#if defined(__OpenBSD__) || defined(__DragonFly__)
 #define _BSD_SOURCE
 #elif defined(__FreeBSD__)
 /* XXX should check whether my former fear mentioned about turns out to
