--- src/libide/io/ide-pty-intercept.c.orig	2024-10-18 21:04:32 UTC
+++ src/libide/io/ide-pty-intercept.c
@@ -97,7 +97,7 @@
 {
   g_auto(IdePtyFd) ret = IDE_PTY_FD_INVALID;
   gint extra = blocking ? 0 : O_NONBLOCK;
-#if defined(HAVE_PTSNAME_R) || defined(__FreeBSD__)
+#if defined(HAVE_PTSNAME_R) || defined(__FreeBSD__) || defined(__DragonFly__)
   char name[256];
 #else
   const char *name;
@@ -115,7 +115,7 @@
   if (ptsname_r (consumer_fd, name, sizeof name - 1) != 0)
     return IDE_PTY_FD_INVALID;
   name[sizeof name - 1] = '\0';
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   if (fdevname_r (consumer_fd, name + 5, sizeof name - 6) == NULL)
     return IDE_PTY_FD_INVALID;
   memcpy (name, "/dev/", 5);
