--- src/dbapi/driver/ftds64/freetds/tds/net.c.orig	2016-01-04 19:58:41 UTC
+++ src/dbapi/driver/ftds64/freetds/tds/net.c
@@ -147,7 +147,7 @@ static int tds_select(TDSSOCKET * tds, u
  * NOPUSH flag do not behave in the same way
  * cf ML "FreeBSD 5.0 performance problems with TCP_NOPUSH"
  */
-#elif (defined(__FreeBSD__) || defined(__GNU_FreeBSD__) || defined(__OpenBSD__)) && defined(TCP_CORK)
+#elif (defined(__FreeBSD__) || defined(__GNU_FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)) && defined(TCP_CORK)
 #define USE_CORK 1
 /* otherwise use NODELAY */
 #elif defined(TCP_NODELAY) && defined(SOL_TCP)
