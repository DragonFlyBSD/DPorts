--- direwolf.h.orig	2018-10-08 14:15:21 UTC
+++ direwolf.h
@@ -274,7 +274,7 @@ char *strtok_r(char *str, const char *de
 char *strcasestr(const char *S, const char *FIND);
 
 
-#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__APPLE__)
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 
 // strlcpy and strlcat should be in string.h and the C library.
 
