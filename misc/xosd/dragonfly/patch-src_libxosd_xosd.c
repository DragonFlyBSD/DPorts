--- a/src/libxosd/xosd.c.orig	2004-11-17 19:27:11 UTC
+++ b/src/libxosd/xosd.c
@@ -427,7 +427,7 @@ event_loop(void *osdv)
 
     /* Wait for the next X11 event or an API request via the pipe. */
     retval = select(max + 1, &readfds, NULL, NULL, tvp);
-    DEBUG(Dvalue, "SELECT=%d PIPE=%d X11=%d", retval,
+    DEBUG(Dvalue, "SELECT=%d PIPE=%ld X11=%ld", retval,
           FD_ISSET(osd->pipefd[0], &readfds), FD_ISSET(xfd, &readfds));
 
     if (retval == -1 && errno == EINTR) {
