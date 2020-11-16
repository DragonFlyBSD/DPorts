--- src/libide/io/ide-pty-intercept.corig	2020-06-26 23:12:33 UTC
+++ src/libide/io/ide-pty-intercept.c
@@ -99,7 +99,7 @@ ide_pty_intercept_create_slave (IdePtyFd
 {
   g_auto(IdePtyFd) ret = IDE_PTY_FD_INVALID;
   gint extra = blocking ? 0 : O_NONBLOCK;
-#if defined(HAVE_PTSNAME_R) || defined(__FreeBSD__)
+#if defined(HAVE_PTSNAME_R) || defined(__FreeBSD__) || defined(__DragonFly__)
   char name[256];
 #else
   const char *name;
@@ -117,7 +117,7 @@ ide_pty_intercept_create_slave (IdePtyFd
   if (ptsname_r (master_fd, name, sizeof name - 1) != 0)
     return IDE_PTY_FD_INVALID;
   name[sizeof name - 1] = '\0';
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   if (fdevname_r (master_fd, name + 5, sizeof name - 6) == NULL)
     return IDE_PTY_FD_INVALID;
   memcpy (name, "/dev/", 5);
