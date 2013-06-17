--- src/util/sys_defs.h.intermediate	2013-06-14 13:26:32.924447000 +0000
+++ src/util/sys_defs.h
@@ -29,6 +29,7 @@
     || defined(BSDI2) || defined(BSDI3) || defined(BSDI4) \
     || defined(OPENBSD2) || defined(OPENBSD3) || defined(OPENBSD4) \
     || defined(OPENBSD5) \
+    || defined(DRAGONFLY) \
     || defined(NETBSD1) || defined(NETBSD2) || defined(NETBSD3) \
     || defined(NETBSD4) \
     || defined(EKKOBSD1)
@@ -92,6 +93,17 @@
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
@@ -167,6 +179,7 @@
 
 #if (defined(__NetBSD_Version__) && __NetBSD_Version__ >= 105000000) \
     || (defined(__FreeBSD__) && __FreeBSD__ >= 4) \
+    || defined(DRAGONFLY) \
     || (defined(OpenBSD) && OpenBSD >= 200003) \
     || defined(USAGI_LIBINET6)
 #ifndef NO_IPV6
@@ -183,6 +196,7 @@
 #ifndef NO_KQUEUE
 # if (defined(__FreeBSD_version) && __FreeBSD_version >= 410000) \
     || (defined(__NetBSD_Version__) && __NetBSD_Version__ >= 200000000) \
+    || defined(DRAGONFLY) \
     || (defined(OpenBSD) && OpenBSD >= 200105)	/* OpenBSD 2.9 */
 #  define EVENTS_STYLE	EVENTS_STYLE_KQUEUE
 # endif
@@ -191,6 +205,7 @@
 #ifndef NO_POSIX_GETPW_R
 # if (defined(__FreeBSD_version) && __FreeBSD_version >= 510000) \
     || (defined(__NetBSD_Version__) && __NetBSD_Version__ >= 300000000) \
+    || defined(DRAGONFLY) \
     || (defined(OpenBSD) && OpenBSD >= 200811)	/* OpenBSD 4.4 */
 #  define HAVE_POSIX_GETPW_R
 # endif
