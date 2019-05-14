--- src/lib/protocols/quic.c.intermediate	2019-05-14 17:05:47.000000000 +0000
+++ src/lib/protocols/quic.c
@@ -22,7 +22,7 @@
  *
  */
 
-#if defined __FreeBSD__ || defined __NetBSD__ || defined __OpenBSD__
+#if defined __FreeBSD__ || defined __NetBSD__ || defined __OpenBSD__ || defined __DragonFly__
 #include <sys/endian.h>
 #endif
 
