--- comm/ldap/c-sdk/include/portable.h.orig	2019-08-30 05:13:45 UTC
+++ comm/ldap/c-sdk/include/portable.h
@@ -119,11 +119,15 @@
 #  define OPENLOG_OPTIONS (LOG_PID | LOG_NOWAIT)
 #endif
 
+#ifdef __DragonFly__
+#define DRAGONFLY
+#endif
+
 /*
  * some systems don't have the BSD re_comp and re_exec routines
  */
 #ifndef NEED_BSDREGEX
-#  if (defined(SYSV) || defined(NETBSD) || defined(FREEBSD) ||       \
+#  if (defined(SYSV) || defined(NETBSD) || defined(FREEBSD) || defined(DRAGONFLY) || \
        defined(__OpenBSD__) || defined(linux) || defined(DARWIN)) && \
       !defined(sgi)
 #    define NEED_BSDREGEX
@@ -276,7 +280,7 @@ int strncasecmp(const char *, const char
       defined(SUNOS4) || defined(SNI) || defined(BSDI) || defined(NCR) ||      \
       defined(OSF1) || defined(NEC) || defined(VMS) ||                         \
       (defined(HPUX10) && !defined(_REENTRANT)) || defined(HPUX11) ||          \
-      defined(UnixWare) || defined(NETBSD) || defined(FREEBSD) ||              \
+      defined(UnixWare) || defined(NETBSD) || defined(FREEBSD) || defined(DRAGONFLY) || \
       defined(OPENBSD) || (defined(LINUX) && __GLIBC__ < 2) ||                 \
       (defined(AIX) && !defined(USE_REENTRANT_LIBC))
 #    define GETHOSTBYNAME(n, r, b, l, e) gethostbyname(n)
