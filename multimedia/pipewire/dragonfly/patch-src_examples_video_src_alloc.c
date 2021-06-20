--- src/examples/video-src-alloc.c.orig	2021-06-16 11:50:25.208383000 +0200
+++ src/examples/video-src-alloc.c	2021-06-16 11:51:06.037464000 +0200
@@ -229,7 +229,7 @@
 	/* create the memfd on the buffer, set the type and flags */
 	d[0].type = SPA_DATA_MemFd;
 	d[0].flags = SPA_DATA_FLAG_READWRITE;
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 	d[0].fd = memfd_create("video-src-memfd", MFD_CLOEXEC | MFD_ALLOW_SEALING);
 #else
 	d[0].fd = -1;
@@ -246,7 +246,7 @@
 		pw_log_error("can't truncate to %d: %m", d[0].maxsize);
 		return;
 	}
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 	/* not enforced yet but server might require SEAL_SHRINK later */
 	seals = F_SEAL_GROW | F_SEAL_SHRINK | F_SEAL_SEAL;
 	if (fcntl(d[0].fd, F_ADD_SEALS, seals) == -1) {
