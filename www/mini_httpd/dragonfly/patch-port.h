--- port.h.orig	2015-09-07 03:46:42.000000000 +0300
+++ port.h
@@ -3,6 +3,9 @@
 #if defined(__FreeBSD__)
 # define OS_FreeBSD
 # define ARCH "FreeBSD"
+#elif defined(__DragonFly__)
+# define OS_DragonFly
+# define ARCH "DragonFly"
 #elif defined(__OpenBSD__)
 # define OS_OpenBSD
 # define ARCH "OpenBSD"
@@ -48,6 +51,23 @@
 # endif /* SO_ACCEPTFILTER */
 #endif /* OS_FreeBSD */
 
+#ifdef OS_DragonFly
+# define HAVE_DAEMON
+# define HAVE_SETSID
+# define HAVE_SETLOGIN
+# define HAVE_WAITPID
+# define HAVE_HSTRERROR
+# define HAVE_TM_GMTOFF
+# define HAVE_SENDFILE
+# define HAVE_SCANDIR
+# define HAVE_INT64T
+# define HAVE_SRANDOMDEV
+# ifdef SO_ACCEPTFILTER
+#  define HAVE_ACCEPT_FILTERS
+#  define ACCEPT_FILTER_NAME "httpready"
+# endif /* SO_ACCEPTFILTER */
+#endif /* OS_DragonFly */
+
 #ifdef OS_OpenBSD
 # define HAVE_DAEMON
 # define HAVE_SETSID
