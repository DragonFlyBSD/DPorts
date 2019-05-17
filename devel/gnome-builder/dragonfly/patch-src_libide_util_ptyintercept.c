--- src/libide/util/ptyintercept.c.orig	2018-07-27 18:53:22 UTC
+++ src/libide/util/ptyintercept.c
@@ -96,7 +96,7 @@ pty_intercept_create_slave (pty_fd_t mas
 {
   g_auto(pty_fd_t) ret = PTY_FD_INVALID;
   gint extra = blocking ? 0 : O_NONBLOCK;
-#if defined(HAVE_PTSNAME_R) || defined(__FreeBSD__)
+#if defined(HAVE_PTSNAME_R) || defined(__FreeBSD__) || defined(__DragonFly__)
   char name[256];
 #else
   const char *name;
@@ -114,7 +114,7 @@ pty_intercept_create_slave (pty_fd_t mas
   if (ptsname_r (master_fd, name, sizeof name - 1) != 0)
     return PTY_FD_INVALID;
   name[sizeof name - 1] = '\0';
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   if (fdevname_r (master_fd, name + 5, sizeof name - 6) == NULL)
     return PTY_FD_INVALID;
   memcpy (name, "/dev/", 5);
