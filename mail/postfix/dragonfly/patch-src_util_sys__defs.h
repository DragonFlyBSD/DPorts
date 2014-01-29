--- src/util/sys_defs.h.orig	2014-01-29 20:35:04.681607000 +0000
+++ src/util/sys_defs.h
@@ -30,6 +30,7 @@
     || defined(BSDI2) || defined(BSDI3) || defined(BSDI4) \
     || defined(OPENBSD2) || defined(OPENBSD3) || defined(OPENBSD4) \
     || defined(OPENBSD5) \
+    || defined(DRAGONFLY) \
     || defined(NETBSD1) || defined(NETBSD2) || defined(NETBSD3) \
     || defined(NETBSD4) || defined(NETBSD5) || defined(NETBSD6) \
     || defined(EKKOBSD1) || defined(DRAGONFLY)
@@ -93,6 +94,17 @@
 /* #define HAS_IPV6 find out interface lookup method */
 #endif
 
+#if defined(DRAGONFLY)
+#define PREFERRED_RAND_SOURCE	"dev:/dev/urandom"	/* introduced 2.1.5 */
+#define HAS_ISSETUGID
+#define HAS_FUTIMES
+#define SOCKADDR_SIZE	socklen_t
+#define SOCKOPT_SIZE	socklen_t
+#define HAS_DUPLEX_PIPE
+#define HAS_CLOSEFROM
+#define USE_SYSV_POLL
+#endif
+
 /* __FreeBSD_version version is major+minor */
 
 #if __FreeBSD_version >= 220000
@@ -177,6 +189,7 @@
 
 #if (defined(__NetBSD_Version__) && __NetBSD_Version__ >= 105000000) \
     || (defined(__FreeBSD__) && __FreeBSD__ >= 4) \
+    || defined(DRAGONFLY) \
     || (defined(OpenBSD) && OpenBSD >= 200003) \
     || defined(__DragonFly__) \
     || defined(USAGI_LIBINET6)
@@ -204,6 +217,7 @@
 #ifndef NO_POSIX_GETPW_R
 # if (defined(__FreeBSD_version) && __FreeBSD_version >= 510000) \
     || (defined(__NetBSD_Version__) && __NetBSD_Version__ >= 300000000) \
+    || defined(DRAGONFLY) \
     || (defined(OpenBSD) && OpenBSD >= 200811)	/* OpenBSD 4.4 */
 #  define HAVE_POSIX_GETPW_R
 # endif
