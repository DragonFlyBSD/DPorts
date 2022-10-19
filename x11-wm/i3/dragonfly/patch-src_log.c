--- src/log.c.orig	2022-10-19 21:38:39.021812000 +0200
+++ src/log.c	2022-10-19 21:39:01.331303000 +0200
@@ -142,7 +142,7 @@
         logbuffer_size = physical_mem_bytes * 0.01;
     }
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     sasprintf(&shmlogname, "/tmp/i3-log-%d", getpid());
 #else
     sasprintf(&shmlogname, "/i3-log-%d", getpid());
