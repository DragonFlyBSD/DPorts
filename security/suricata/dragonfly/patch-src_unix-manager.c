--- src/unix-manager.c.orig	2019-10-14 11:25:49 UTC
+++ src/unix-manager.c
@@ -185,7 +185,7 @@ static int UnixNew(UnixCommand * this)
         return 0;
     }
 
-#if !(defined OS_FREEBSD || defined __OpenBSD__)
+#if !(defined OS_FREEBSD || defined __OpenBSD__ || defined __DragonFly__)
     /* Set file mode: will not fully work on most system, the group
      * permission is not changed on some Linux. *BSD won't do the
      * chmod: it returns EINVAL when calling chmod on sockets. */
