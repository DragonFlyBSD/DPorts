--- ../pr/src/misc/prnetdb.c.intermediate	2012-12-27 20:06:15.368314000 +0100
+++ ../pr/src/misc/prnetdb.c	2012-12-27 20:09:15.078565000 +0100
@@ -78,6 +78,11 @@
 #define _PR_HAVE_GETPROTO_R_INT
 #endif
 
+#if defined(DRAGONFLY)
+#define _PR_HAVE_GETPROTO_R
+#define _PR_HAVE_5_ARG_GETPROTO_R
+#endif
+
 /* BeOS has glibc but not the glibc-style getprotobyxxx_r functions. */
 #if (defined(__GLIBC__) && __GLIBC__ >= 2 && !defined(XP_BEOS))
 #define _PR_HAVE_GETPROTO_R
@@ -295,7 +300,7 @@
 }
 
 #elif (defined(DARWIN) && defined(HAVE_GETIFADDRS)) || defined(FREEBSD) \
-    || defined(NETBSD) || defined(OPENBSD)
+    || defined(NETBSD) || defined(OPENBSD) || defined(DRAGONFLY)
 
 /*
  * Use the BSD getifaddrs function.
