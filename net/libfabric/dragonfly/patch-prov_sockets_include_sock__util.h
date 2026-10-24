--- prov/sockets/include/sock_util.h.orig	2022-07-26 00:00:00 UTC
+++ prov/sockets/include/sock_util.h
@@ -79,7 +79,7 @@
 {
 #ifdef __APPLE__
 	return (void *) -1;
-#elif defined __FreeBSD__
+#elif defined __FreeBSD__ || defined __DragonFly__
 	return (void *) -1;
 #else
 	return mremap(old_address, old_size, new_size, 0);
