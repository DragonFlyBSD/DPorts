--- src/launcher-util.c.orig	2015-06-15 22:04:18 +0200
+++ src/launcher-util.c
@@ -39,9 +39,14 @@
 #include <sys/ioctl.h>
 #include <fcntl.h>
 #include <unistd.h>
+#if defined(__FreeBSD__)
+#include <sys/consio.h>
+#include <sys/kbio.h>
+#else
 #include <linux/vt.h>
 #include <linux/kd.h>
 #include <linux/major.h>
+#endif
 
 #include "compositor.h"
 #include "launcher-util.h"
@@ -171,7 +176,11 @@
 	msg.msg_controllen = sizeof control;
 	
 	do {
+#ifdef MSG_CMSG_CLOEXEC
 		len = recvmsg(launcher->fd, &msg, MSG_CMSG_CLOEXEC);
+#else
+		len = recvmsg(launcher->fd, &msg, 0);
+#endif
 	} while (len < 0 && errno == EINTR);
 
 	if (len != sizeof ret ||
@@ -191,6 +200,9 @@
 		fprintf(stderr, "missing drm fd in socket request\n");
 		return -1;
 	}
+#ifndef MSG_CMSG_CLOEXEC
+	fcntl(data->fd, F_SETFD, FD_CLOEXEC);
+#endif
 
 	return data->fd;
 }
@@ -293,36 +305,35 @@
 {
 	struct wl_event_loop *loop;
 	struct vt_mode mode = { 0 };
-	struct stat buf;
 	char tty_device[32] ="<stdin>";
 	int ret, kd_mode;
 
-	if (tty == 0) {
-		launcher->tty = dup(tty);
-		if (launcher->tty == -1) {
-			weston_log("couldn't dup stdin: %m\n");
-			return -1;
-		}
-	} else {
-		snprintf(tty_device, sizeof tty_device, "/dev/tty%d", tty);
-		launcher->tty = open(tty_device, O_RDWR | O_CLOEXEC);
-		if (launcher->tty == -1) {
-			weston_log("couldn't open tty %s: %m\n", tty_device);
-			return -1;
-		}
+	if (tty != 0)
+		goto argtty;
+	launcher->tty = open("/dev/ttyv0", O_RDWR);
+	if (launcher->tty == -1) {
+		weston_log("couldn't open /dev/ttyv0: %s\n", strerror(errno));
+		return -1;
 	}
-
-	if (fstat(launcher->tty, &buf) == -1 ||
-	    major(buf.st_rdev) != TTY_MAJOR || minor(buf.st_rdev) == 0) {
-		weston_log("%s not a vt\n", tty_device);
-		weston_log("if running weston from ssh, "
-			   "use --tty to specify a tty\n");
+	ret = ioctl(launcher->tty, VT_OPENQRY, &tty);
+	if (ret != 0) {
+		weston_log("failed to query free vt: %s\n", strerror(errno));
 		goto err_close;
 	}
+	close(launcher->tty);
+
+argtty:
+	snprintf(tty_device, sizeof tty_device, "/dev/ttyv%d", tty);
+	launcher->tty = open(tty_device, O_RDWR | O_CLOEXEC);
+	if (launcher->tty == -1) {
+		weston_log("couldn't open tty %s: %s\n", tty_device,
+		    strerror(errno));
+		return -1;
+	}
 
 	ret = ioctl(launcher->tty, KDGETMODE, &kd_mode);
 	if (ret) {
-		weston_log("failed to get VT mode: %m\n");
+		weston_log("failed to get VT mode: %s\n", strerror(errno));
 		return -1;
 	}
 	if (kd_mode != KD_TEXT) {
@@ -331,41 +342,28 @@
 		goto err_close;
 	}
 
-	ioctl(launcher->tty, VT_ACTIVATE, minor(buf.st_rdev));
-	ioctl(launcher->tty, VT_WAITACTIVE, minor(buf.st_rdev));
+	ioctl(launcher->tty, VT_ACTIVATE, tty);
+	ioctl(launcher->tty, VT_WAITACTIVE, tty);
 
 	if (ioctl(launcher->tty, KDGKBMODE, &launcher->kb_mode)) {
-		weston_log("failed to read keyboard mode: %m\n");
-		goto err_close;
-	}
-
-	if (ioctl(launcher->tty, KDSKBMUTE, 1) &&
-	    ioctl(launcher->tty, KDSKBMODE, K_OFF)) {
-		weston_log("failed to set K_OFF keyboard mode: %m\n");
+		weston_log("failed to read keyboard mode: %s\n",
+		    strerror(errno));
 		goto err_close;
 	}
 
 	ret = ioctl(launcher->tty, KDSETMODE, KD_GRAPHICS);
 	if (ret) {
-		weston_log("failed to set KD_GRAPHICS mode on tty: %m\n");
-		goto err_close;
-	}
-
-	/*
-	 * SIGRTMIN is used as global VT-acquire+release signal. Note that
-	 * SIGRT* must be tested on runtime, as their exact values are not
-	 * known at compile-time. POSIX requires 32 of them to be available.
-	 */
-	if (SIGRTMIN > SIGRTMAX) {
-		weston_log("not enough RT signals available: %u-%u\n",
-			   SIGRTMIN, SIGRTMAX);
-		ret = -EINVAL;
+		weston_log("failed to set KD_GRAPHICS mode on tty: %s\n",
+		    strerror(errno));
 		goto err_close;
 	}
 
 	mode.mode = VT_PROCESS;
-	mode.relsig = SIGRTMIN;
-	mode.acqsig = SIGRTMIN;
+	mode.relsig = SIGUSR1;
+	mode.acqsig = SIGUSR1;
+#if defined(__FreeBSD__)
+	mode.frsig = SIGIO; /* not used, but has to be set anyway */
+#endif
 	if (ioctl(launcher->tty, VT_SETMODE, &mode) < 0) {
 		weston_log("failed to take control of vt handling\n");
 		goto err_close;
@@ -373,7 +371,7 @@
 
 	loop = wl_display_get_event_loop(launcher->compositor->wl_display);
 	launcher->vt_source =
-		wl_event_loop_add_signal(loop, SIGRTMIN, vt_handler, launcher);
+		wl_event_loop_add_signal(loop, SIGUSR1, vt_handler, launcher);
 	if (!launcher->vt_source)
 		goto err_close;
 
@@ -414,7 +412,11 @@
 		/* We don't get a chance to read out the original kb
 		 * mode for the tty, so just hard code K_UNICODE here
 		 * in case we have to clean if weston-launch dies. */
+#if defined(__FreeBSD__)
+		launcher->kb_mode = K_XLATE;
+#else
 		launcher->kb_mode = K_UNICODE;
+#endif
 
 		loop = wl_display_get_event_loop(compositor->wl_display);
 		launcher->source = wl_event_loop_add_fd(loop, launcher->fd,
@@ -463,3 +465,9 @@
 
 	free(launcher);
 }
+
+int
+weston_launcher_ttyfd(struct weston_launcher *launcher)
+{
+	return launcher->tty;
+}
