--- src/compositor-x11.c.orig	2015-08-14 20:28:16 +0200
+++ src/compositor-x11.c
@@ -732,7 +732,11 @@
 
 
 	/* Create SHM segment and attach it */
+#if defined(__FreeBSD__)
+	output->shm_id = shmget(IPC_PRIVATE, width * height * (bitsperpixel / 8), IPC_CREAT | SHM_R | SHM_W);
+#else
 	output->shm_id = shmget(IPC_PRIVATE, width * height * (bitsperpixel / 8), IPC_CREAT | S_IRWXU);
+#endif
 	if (output->shm_id == -1) {
 		weston_log("x11shm: failed to allocate SHM segment\n");
 		return -1;
@@ -1199,6 +1203,7 @@
 	prev = NULL;
 	count = 0;
 	while (x11_backend_next_event(b, &event, mask)) {
+		mask &= ~WL_EVENT_READABLE;
 		response_type = event->response_type & ~0x80;
 
 		switch (prev ? prev->response_type & ~0x80 : 0x80) {
