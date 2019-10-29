--- src/3rdparty/rpmalloc/rpmalloc/rpmalloc/malloc.c.orig	2019-08-08 18:59:16 UTC
+++ src/3rdparty/rpmalloc/rpmalloc/rpmalloc/malloc.c
@@ -313,7 +313,7 @@ pthread_create(pthread_t* thread,
                const pthread_attr_t* attr,
                void* (*start_routine)(void*),
                void* arg) {
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__APPLE__) || defined(__HAIKU__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__APPLE__) || defined(__HAIKU__) || defined(__DragonFly__)
 	char fname[] = "pthread_create";
 #else
 	char fname[] = "_pthread_create";
