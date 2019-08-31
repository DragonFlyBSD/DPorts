--- backend/session/session.c.orig	2019-08-27 03:32:24.
+++ backend/session/session.c
@@ -288,7 +288,7 @@ size_t wlr_session_find_gpus(struct wlr_
 		return explicit_find_gpus(session, ret_len, ret, explicit);
 	}
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	// XXX: libudev-devd does not return any GPUs (yet?)
 	return explicit_find_gpus(session, ret_len, ret, "/dev/drm/0");
 #else
