--- ls.c.orig	2004-06-10 12:45:50.000000000 +0300
+++ ls.c
@@ -160,7 +160,7 @@ quote(unsigned char *path, int maxlength
     return buf;
 }
 
-#if !defined(__FreeBSD__) && !defined(__OpenBSD__)
+#if !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__DragonFly__)
 static void strmode(mode_t mode, char *dest)
 {
     static const char *rwx[] = {
