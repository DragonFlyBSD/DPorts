--- backend/session/session.c.orig	2019-05-24 10:53:29.041904000 +0300
+++ backend/session/session.c	2019-05-24 11:02:58.095172000 +0300
@@ -197,6 +197,12 @@ static struct wlr_device *find_device(st
 
 	wlr_log(WLR_ERROR, "Tried to use fd %d not opened by session", fd);
 	assert(0);
+
+	/* In order to not get build error:
+	 * ../backend/session/session.c:179:1: error: control reaches end of
+	 * non-void function [-Werror=return-type]
+	 */
+	return dev;
 }
 
 void wlr_session_close_file(struct wlr_session *session, int fd) {
@@ -287,7 +293,7 @@ size_t wlr_session_find_gpus(struct wlr_
 		return explicit_find_gpus(session, ret_len, ret, explicit);
 	}
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	// XXX: libudev-devd does not return any GPUs (yet?)
 	return explicit_find_gpus(session, ret_len, ret, "/dev/drm/0");
 #else
