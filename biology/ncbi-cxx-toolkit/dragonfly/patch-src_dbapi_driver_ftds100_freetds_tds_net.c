--- src/dbapi/driver/ftds100/freetds/tds/net.c.orig	2017-12-28 19:06:51 UTC
+++ src/dbapi/driver/ftds100/freetds/tds/net.c
@@ -144,7 +144,7 @@ tds_socket_done(void)
  * NOPUSH flag do not behave in the same way
  * cf ML "FreeBSD 5.0 performance problems with TCP_NOPUSH"
  */
-#elif (defined(__FreeBSD__) || defined(__GNU_FreeBSD__) || defined(__OpenBSD__)) && defined(TCP_CORK)
+#elif (defined(__FreeBSD__) || defined(__GNU_FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)) && defined(TCP_CORK)
 #define USE_CORK 1
 /* otherwise use NODELAY */
 #elif defined(TCP_NODELAY) && defined(SOL_TCP)
