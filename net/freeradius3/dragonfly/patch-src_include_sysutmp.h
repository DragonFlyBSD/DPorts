--- src/include/sysutmp.h.orig	2019-11-14 17:08:23 UTC
+++ src/include/sysutmp.h
@@ -46,6 +46,12 @@ extern "C" {
 #  define UT_HOSTSIZE	64
 #endif
 
+#ifdef __DragonFly__
+# ifndef UTMP_FILE
+#  define UTMP_FILE _PATH_UTMPX
+# endif
+#endif
+
 #if (defined(__FreeBSD__) && !defined(HAVE_UTMPX_H)) || defined(__NetBSD__) || defined(bsdi) || defined(__OpenBSD__) || defined(__APPLE__)
 #  ifndef UTMP_FILE
 #    define UTMP_FILE "/var/run/utmp"
