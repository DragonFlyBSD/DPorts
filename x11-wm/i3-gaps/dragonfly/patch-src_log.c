--- src/log.c.orig	2014-06-15 17:12:43.000000000 +0000
+++ src/log.c
@@ -118,7 +118,7 @@ void open_logbuffer(void) {
                          sysconf(_SC_PAGESIZE);
 #endif
     logbuffer_size = min(physical_mem_bytes * 0.01, shmlog_size);
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     sasprintf(&shmlogname, "/tmp/i3-log-%d", getpid());
 #else
     sasprintf(&shmlogname, "/i3-log-%d", getpid());
@@ -129,7 +129,7 @@ void open_logbuffer(void) {
         return;
     }
 
-#if defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__OpenBSD__) || defined(__APPLE__) || defined(__DragonFly__)
     if (ftruncate(logbuffer_shm, logbuffer_size) == -1) {
         fprintf(stderr, "Could not ftruncate SHM segment for the i3 log: %s\n", strerror(errno));
 #else
