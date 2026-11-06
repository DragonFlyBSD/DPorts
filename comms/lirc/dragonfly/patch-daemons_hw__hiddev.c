--- daemons/hw_hiddev.c.orig	2026-11-06 07:28:29 UTC
+++ daemons/hw_hiddev.c
@@ -274,7 +274,7 @@ int hiddev_decode(struct ir_remote *remote, ir_code * 
 
 char *hiddev_rec(struct ir_remote *remotes)
 {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define HIDRECLEN 3                             /* get this from hid_init() */
 	char inbuf [HIDRECLEN];
         struct hiddev_event
@@ -299,7 +299,7 @@ char *hiddev_rec(struct ir_remote *remotes)
 
 	last = end;
 	gettimeofday(&start, NULL);
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	if (!strcmp(hw.name, "dvico")) {
 		rd = read(hw.fd, inbuf, sizeof inbuf);
 		if (rd != sizeof inbuf) {
