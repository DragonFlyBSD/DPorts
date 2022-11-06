--- common/terminal.c.orig	2022-05-23 20:03:38 UTC
+++ common/terminal.c
@@ -14,7 +14,7 @@
 #define K_ENABLE  K_UNICODE
 #define K_DISABLE K_OFF
 #define FRSIG     0
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/consio.h>
 #include <sys/kbio.h>
 #include <termios.h>
@@ -35,7 +35,7 @@
 
 #define TTYPATHLEN 16
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 static int get_tty_path(int tty, char path[static TTYPATHLEN]) {
 	assert(tty >= 0);
 
@@ -175,7 +175,7 @@ int terminal_current_vt(int fd) {
 		return -1;
 	}
 	return st.v_active;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 	int vt;
 	int res = ioctl(fd, VT_GETACTIVE, &vt);
 	close(fd);
@@ -249,7 +249,7 @@ int terminal_set_keyboard(int fd, bool e
 			   enable ? "enabled" : "disabled", strerror(errno));
 		return -1;
 	}
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	struct termios tios;
 	if (tcgetattr(fd, &tios) == -1) {
 		log_errorf("Could not set get terminal mode: %s", strerror(errno));
