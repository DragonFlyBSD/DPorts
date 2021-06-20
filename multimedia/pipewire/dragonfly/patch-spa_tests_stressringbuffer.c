--- spa/tests/stress-ringbuffer.c.orig	2021-06-10 17:16:02.135818000 +0200
+++ spa/tests/stress-ringbuffer.c	2021-06-10 17:16:27.335224000 +0200
@@ -11,7 +11,7 @@
 #define ARRAY_SIZE 63
 #define MAX_VALUE 0x10000
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 static int sched_getcpu(void) { return -1; };
 #endif
 
