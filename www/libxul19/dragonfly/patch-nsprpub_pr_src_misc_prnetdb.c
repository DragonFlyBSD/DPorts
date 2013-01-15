--- nsprpub/pr/src/misc/prnetdb.c.orig	2012-03-06 15:45:42.000000000 +0100
+++ nsprpub/pr/src/misc/prnetdb.c	2013-01-15 18:50:31.985592000 +0100
@@ -115,6 +115,11 @@
 #define _PR_HAVE_5_ARG_GETPROTO_R
 #endif
 
+#if __DragonFly_version >= 200202
+#define _PR_HAVE_GETPROTO_R
+#define _PR_HAVE_5_ARG_GETPROTO_R
+#endif
+
 /* BeOS has glibc but not the glibc-style getprotobyxxx_r functions. */
 #if (defined(__GLIBC__) && __GLIBC__ >= 2 && !defined(XP_BEOS))
 #define _PR_HAVE_GETPROTO_R
@@ -332,7 +337,7 @@
 }
 
 #elif (defined(DARWIN) && defined(HAVE_GETIFADDRS)) || defined(FREEBSD) \
-    || defined(NETBSD) || defined(OPENBSD)
+    || defined(NETBSD) || defined(OPENBSD) || defined(DRAGONFLY)
 
 /*
  * Use the BSD getifaddrs function.
