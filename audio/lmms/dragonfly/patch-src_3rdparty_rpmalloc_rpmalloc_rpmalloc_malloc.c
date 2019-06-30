--- src/3rdparty/rpmalloc/rpmalloc/rpmalloc/malloc.c.orig	2019-05-29 18:34:03 UTC
+++ src/3rdparty/rpmalloc/rpmalloc/rpmalloc/malloc.c
@@ -199,7 +199,8 @@ pthread_create(pthread_t* thread,
                const pthread_attr_t* attr,
                void* (*start_routine)(void*),
                void* arg) {
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__APPLE__) || \
+    defined(__DragonFly__)
 	char fname[] = "pthread_create";
 #else
 	char fname[] = "_pthread_create";
