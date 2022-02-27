--- sfm.c.orig	2021-11-05 14:11:35 UTC
+++ sfm.c
@@ -14,7 +14,7 @@
 #include <sys/wait.h>
 #if defined(__linux__)
 #include <sys/inotify.h>
-#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || \
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__) || \
 	defined(__APPLE__)
 #include <sys/event.h>
 #endif
@@ -215,7 +215,7 @@ struct kevent evlist[2]; /* events we wa
 struct kevent chlist[2]; /* events that were triggered */
 static struct timespec gtimeout;
 #endif
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define OFF_T "%ld"
 #elif defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
 #define OFF_T "%lld"
