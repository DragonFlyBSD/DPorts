--- tools/http_load/port.h.orig	2016-07-12 02:03:32.000000000 +0300
+++ tools/http_load/port.h
@@ -36,6 +36,9 @@
 #elif defined(__NetBSD__)
 #define OS_NetBSD
 #define ARCH "NetBSD"
+#elif defined(__DragonFly__)
+#define OS_DragonFly
+#define ARCH "DragonFly"
 #elif defined(linux)
 #define OS_Linux
 #define ARCH "Linux"
@@ -97,6 +100,17 @@
 #define HAVE_INT64T
 #endif /* OS_NetBSD */
 
+#ifdef OS_DragonFly
+#define HAVE_DAEMON
+#define HAVE_SETSID
+#define HAVE_SETLOGIN
+#define HAVE_WAITPID
+#define HAVE_HSTRERROR
+#define HAVE_TM_GMTOFF
+#define HAVE_SCANDIR
+#define HAVE_INT64T
+#endif /* OS_DragonFly */
+
 #ifdef OS_Linux
 #define HAVE_DAEMON
 #define HAVE_SETSID
