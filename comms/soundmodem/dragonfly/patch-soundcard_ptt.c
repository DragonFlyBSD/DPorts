--- soundcard/ptt.c.intermediate	2016-07-14 19:03:45 UTC
+++ soundcard/ptt.c
@@ -54,6 +54,9 @@
 
 #ifdef HAVE_LINUX_PPDEV_H
 #include <linux/ppdev.h>
+#elif defined(__DragonFly__)
+#include <dev/misc/ppi/ppi.h>
+#include <bus/ppbus/ppbconf.h>
 #elif defined(__FreeBSD__)
 #include <dev/ppbus/ppi.h>
 #include <dev/ppbus/ppbconf.h>
@@ -257,7 +260,7 @@ int pttinit(struct pttio *state, const c
 	if (!ioctl(fd, TIOCMBIC, &y)) {
 		state->u.fd = fd;
 		state->mode = serport;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	} else if (!ioctl(fd, PPISDATA, &x)) {
 #else
 	} else if (!ioctl(fd, PPCLAIM, 0) && !ioctl(fd, PPRDATA, &x)) {
@@ -350,7 +353,7 @@ void pttsetptt(struct pttio *state, int
 		if (state->u.fd == -1)
 			return;
 		reg = state->ptt | (state->dcd << 1);
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		ioctl(state->u.fd, PPISDATA, &reg);
 #else
 		ioctl(state->u.fd, PPWDATA, &reg);
@@ -440,7 +443,7 @@ void pttsetdcd(struct pttio *state, int
 		if (state->u.fd == -1)
 			return;
 		reg = state->ptt | (state->dcd << 1);
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		ioctl(state->u.fd, PPISDATA, &reg);
 #else
 		ioctl(state->u.fd, PPWDATA, &reg);
