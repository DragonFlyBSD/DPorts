--- ldap/c-sdk/include/portable.h.orig	2016-04-07 21:14:24 UTC
+++ ldap/c-sdk/include/portable.h
@@ -118,6 +118,10 @@
 #define OPENLOG_OPTIONS		( LOG_PID | LOG_NOWAIT )
 #endif
 
+#ifdef __DragonFly__
+#define DRAGONFLY
+#endif
+
 /*
  * some systems don't have the BSD re_comp and re_exec routines
  */
@@ -273,6 +277,7 @@ int strncasecmp(const char *, const char
     ( defined(HPUX10) && !defined(_REENTRANT)) || defined(HPUX11) || \
     defined(UnixWare) || defined(NETBSD) || \
     defined(FREEBSD) || defined(OPENBSD) || \
+    defined(DRAGONFLY) || \
     (defined(LINUX) && __GLIBC__ < 2) || \
     (defined(AIX) && !defined(USE_REENTRANT_LIBC))
 #define GETHOSTBYNAME( n, r, b, l, e )  gethostbyname( n )
@@ -289,7 +294,7 @@ typedef char GETHOSTBYNAME_buf_t [NSLDAP
 #elif defined(HPUX10)
 #define GETHOSTBYNAME_BUF_T struct hostent_data
 #define GETHOSTBYNAME( n, r, b, l, e )	nsldapi_compat_gethostbyname_r( n, r, (char *)&b, l, e )
-#elif defined(LINUX) || defined(DRAGONFLY)
+#elif defined(LINUX)
 typedef char GETHOSTBYNAME_buf_t [NSLDAPI_NETDB_BUF_SIZE];
 #define GETHOSTBYNAME_BUF_T GETHOSTBYNAME_buf_t
 #define GETHOSTBYNAME( n, r, b, l, rp, e )  gethostbyname_r( n, r, b, l, rp, e )
