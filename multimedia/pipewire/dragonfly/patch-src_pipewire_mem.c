--- src/pipewire/mem.c.orig
+++ src/pipewire/mem.c
@@ -27,7 +27,7 @@
 #define PW_LOG_TOPIC_DEFAULT log_mem
 
 #if !defined(__FreeBSD__) && !defined(__MidnightBSD__) && !defined(__GNU__) \
-       && !defined(HAVE_MEMFD_CREATE)
+       && !defined(HAVE_MEMFD_CREATE) && !defined(__DragonFly__)
 /*
  * No glibc wrappers exist for memfd_create(2), so provide our own.
  *
@@ -44,7 +44,8 @@
 #define HAVE_MEMFD_CREATE 1
 #endif
 
-#if defined(__FreeBSD__) || defined(__MidnightBSD__) || defined(__GNU__)
+#if defined(__FreeBSD__) || defined(__MidnightBSD__) || defined(__GNU__) || \
+    defined(__DragonFly__)
 #define MAP_LOCKED 0
 #endif
 
@@ -558,6 +559,18 @@
 		pw_log_error("%p: Failed to create memfd: %m", pool);
 		goto error_free;
 	}
+#elif defined(__DragonFly__)
+	char shm_name[64];
+	static int shm_serial;
+	snprintf(shm_name, sizeof(shm_name), "/pipewire-shm-%d-%d",
+		 (int) getpid(), __sync_fetch_and_add(&shm_serial, 1));
+	b->this.fd = shm_open(shm_name, O_CREAT | O_EXCL | O_RDWR | O_CLOEXEC, 0600);
+	if (b->this.fd == -1) {
+		res = -errno;
+		pw_log_error("%p: Failed to create shm object: %m", pool);
+		goto error_free;
+	}
+	shm_unlink(shm_name);
 #elif defined(__FreeBSD__) || defined(__MidnightBSD__)
 	b->this.fd = shm_open(SHM_ANON, O_CREAT | O_RDWR | O_CLOEXEC, 0);
 	if (b->this.fd == -1) {
