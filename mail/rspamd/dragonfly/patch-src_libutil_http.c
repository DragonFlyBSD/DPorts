--- src/libutil/http.c.orig	2017-01-06 11:21:23 UTC
+++ src/libutil/http.c
@@ -2371,7 +2371,13 @@ rspamd_http_message_set_body (struct rsp
 		storage->shared.name = g_slice_alloc (sizeof (*storage->shared.name));
 		REF_INIT_RETAIN (storage->shared.name, rspamd_http_shname_dtor);
 #ifdef HAVE_SANE_SHMEM
+#if defined(__DragonFly__)
+		// DragonFly uses regular files for shm. User rspamd is not allowed to create
+		// files in the root.
+		storage->shared.name->shm_name = g_strdup ("/tmp/rhm.XXXXXXXXXXXXXXXXXXXX");
+#else
 		storage->shared.name->shm_name = g_strdup ("/rhm.XXXXXXXXXXXXXXXXXXXX");
+#endif
 		storage->shared.shm_fd = rspamd_shmem_mkstemp (storage->shared.name->shm_name);
 #else
 		/* XXX: assume that tempdir is /tmp */
