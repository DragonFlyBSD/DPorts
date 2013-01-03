
$FreeBSD: ports/lang/mono/files/patch-mono_io-layer_sockets.c,v 1.6 2012/11/17 05:58:53 svnexp Exp $

--- mono/io-layer/sockets.c.orig
+++ mono/io-layer/sockets.c
@@ -1290,13 +1290,13 @@
 			keepalivetime /= 1000;
 			if (keepalivetime == 0 || rem >= 500)
 				keepalivetime++;
-			ret = setsockopt (fd, SOL_TCP, TCP_KEEPIDLE, &keepalivetime, sizeof (uint32_t));
+			ret = setsockopt (fd, 6, TCP_KEEPIDLE, &keepalivetime, sizeof (uint32_t));
 			if (ret == 0) {
 				rem = keepaliveinterval % 1000;
 				keepaliveinterval /= 1000;
 				if (keepaliveinterval == 0 || rem >= 500)
 					keepaliveinterval++;
-				ret = setsockopt (fd, SOL_TCP, TCP_KEEPINTVL, &keepaliveinterval, sizeof (uint32_t));
+				ret = setsockopt (fd, 6, TCP_KEEPINTVL, &keepaliveinterval, sizeof (uint32_t));
 			}
 			if (ret != 0) {
 				gint errnum = errno;
