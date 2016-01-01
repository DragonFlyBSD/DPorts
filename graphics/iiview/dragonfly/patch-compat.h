--- compat.h.orig	2014-12-11 17:11:25.000000000 +0200
+++ compat.h
@@ -2,7 +2,7 @@
 #ifndef COMPAT_H_INCLUDED
 #define COMPAT_H_INCLUDED
 
-#if !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__NetBSD__)
+#if !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__NetBSD__) && !defined(__DragonFly__)
 
 extern void strlcpy(char *dest, const char *src, size_t size);
 extern void strlcat(char *dest, const char *src, size_t size);
