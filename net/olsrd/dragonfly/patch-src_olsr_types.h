--- src/olsr_types.h.orig	2015-09-20 15:22:23.000000000 +0300
+++ src/olsr_types.h
@@ -47,7 +47,7 @@
 #ifndef _OLSR_TYPES_H
 #define	 _OLSR_TYPES_H
 
-#if !defined __linux__ && !defined __APPLE__ && !defined _WIN32 && !defined __FreeBSD__ && !defined __FreeBSD_kernel__ && !defined __NetBSD__ && !defined __OpenBSD__
+#if !defined __linux__ && !defined __APPLE__ && !defined _WIN32 && !defined(__DragonFly__) && !defined __FreeBSD__ && !defined __FreeBSD_kernel__ && !defined __NetBSD__ && !defined __OpenBSD__
 #       error "Unsupported system"
 #endif /* !defined __linux__ && !defined __APPLE__ && !defined _WIN32 && !defined __FreeBSD__ && !defined __FreeBSD_kernel__ && !defined __NetBSD__ && !defined __OpenBSD__ */
 
