--- pr/src/misc/prnetdb.c.orig
+++ pr/src/misc/prnetdb.c
@@ -75,6 +75,11 @@
 #define _PR_HAVE_5_ARG_GETPROTO_R
 #endif
 
+#if defined(DRAGONFLY)
+#define _PR_HAVE_GETPROTO_R
+#define _PR_HAVE_5_ARG_GETPROTO_R
+#endif
+
 /* BeOS has glibc but not the glibc-style getprotobyxxx_r functions. */
 #if (defined(__GLIBC__) && __GLIBC__ >= 2)
 #define _PR_HAVE_GETPROTO_R
@@ -279,7 +284,7 @@
 }
 
 #elif (defined(DARWIN) && defined(HAVE_GETIFADDRS)) || defined(FREEBSD) || \
-    defined(NETBSD) || defined(OPENBSD)
+    defined(NETBSD) || defined(OPENBSD) || defined(DRAGONFLY)
 
 /*
  * Use the BSD getifaddrs function.
