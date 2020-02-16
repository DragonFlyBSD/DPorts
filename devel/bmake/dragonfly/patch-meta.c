--- meta.c.orig	2020-02-06 01:18:56 UTC
+++ meta.c
@@ -1690,7 +1690,11 @@ meta_compat_parent(pid_t child)
     meta_job_parent(NULL, child);
     close(childPipe[1]);			/* child side */
     outfd = childPipe[0];
+#ifdef __DragonFly__
+    metafd = -1;	/* unsupported */
+#else
     metafd = Mybm.filemon ? filemon_readfd(Mybm.filemon) : -1;
+#endif
     maxfd = -1;
     if (outfd > maxfd)
 	    maxfd = outfd;
