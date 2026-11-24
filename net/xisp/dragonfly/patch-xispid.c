--- xispid.c.orig
+++ xispid.c
@@ -42,7 +42,7 @@
  #include <limits.h>
 #endif
 
-#if !defined(__FreeBSD__) && !defined(linux) /* setgrent() is int in FreeBSD */
+#if !defined(__FreeBSD__) && !defined(__DragonFly__) && !defined(linux) /* setgrent() is int in FreeBSD */
 struct passwd *getpwuid();
 struct group *getgrgid(), *getgrent();
 uid_t getuid(), geteuid();
