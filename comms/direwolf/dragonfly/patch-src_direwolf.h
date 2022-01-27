--- src/direwolf.h.orig	2020-10-28 00:45:30 UTC
+++ src/direwolf.h
@@ -282,7 +282,7 @@ char *strtok_r(char *str, const char *de
 char *strcasestr(const char *S, const char *FIND);
 
 
-#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__APPLE__)
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 
 // strlcpy and strlcat should be in string.h and the C library.
 
