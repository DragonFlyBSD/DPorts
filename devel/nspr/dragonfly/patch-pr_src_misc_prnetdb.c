--- pr/src/misc/prnetdb.c.orig	Mon Oct 21 11:31:57 2024
+++ pr/src/misc/prnetdb.c	Tue Apr
@@ -77,6 +77,11 @@ PRLock* _pr_dnsLock = NULL;
 #  define _PR_HAVE_5_ARG_GETPROTO_R
 #endif
 
+#if defined(DRAGONFLY)
+#define _PR_HAVE_GETPROTO_R
+#define _PR_HAVE_5_ARG_GETPROTO_R
+#endif
+
 /* BeOS has glibc but not the glibc-style getprotobyxxx_r functions. */
 #if (defined(__GLIBC__) && __GLIBC__ >= 2)
 #  define _PR_HAVE_GETPROTO_R
@@ -275,7 +280,7 @@ static void _pr_QueryNetIfs(void) {
 }
 
 #  elif (defined(DARWIN) && defined(HAVE_GETIFADDRS)) || defined(FREEBSD) || \
-      defined(NETBSD) || defined(OPENBSD)
+      defined(NETBSD) || defined(OPENBSD) || defined(DRAGONFLY)
 
 /*
  * Use the BSD getifaddrs function.
