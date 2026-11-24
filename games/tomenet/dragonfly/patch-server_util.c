--- server/util.c.orig
+++ server/util.c
@@ -173,7 +173,7 @@
 /*
  * Hack -- External functions
  */
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
  #include <pwd.h>
 #else
 extern struct passwd *getpwuid (__uid_t __uid);
