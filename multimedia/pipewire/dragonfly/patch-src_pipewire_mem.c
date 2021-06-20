--- src/pipewire/mem.c.orig	2021-06-16 10:33:04.923214000 +0200
+++ src/pipewire/mem.c	2021-06-16 11:08:27.165301000 +0200
@@ -43,7 +43,7 @@
 
 #define NAME "mempool"
 
-#if !defined(__FreeBSD__) && !defined(HAVE_MEMFD_CREATE)
+#if !defined(__DragonFly__) && !defined(__FreeBSD__) && !defined(HAVE_MEMFD_CREATE)
 /*
  * No glibc wrappers exist for memfd_create(2), so provide our own.
  *
@@ -60,7 +60,7 @@
 #define HAVE_MEMFD_CREATE 1
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define MAP_LOCKED 0
 #endif
 
@@ -490,7 +490,7 @@
 		pw_log_error(NAME" %p: Failed to create memfd: %m", pool);
 		goto error_free;
 	}
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || !defined(__DragonFly__)
 	b->this.fd = shm_open(SHM_ANON, O_CREAT | O_RDWR | O_CLOEXEC, 0);
 	if (b->this.fd == -1) {
 		res = -errno;
