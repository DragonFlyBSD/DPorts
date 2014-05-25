--- ./pdns/dns.hh.orig	2013-12-17 13:47:33.000000000 +0000
+++ ./pdns/dns.hh	2014-05-23 22:39:09.381159000 +0100
@@ -205,7 +205,7 @@
 #ifdef WIN32
 #define BYTE_ORDER 1
 #define LITTLE_ENDIAN 1
-#elif __FreeBSD__ || __APPLE__ || __OpenBSD__
+#elif __FreeBSD__ || __DragonFly__ || __APPLE__ || __OpenBSD__
 #include <machine/endian.h>
 #elif __linux__
 # include <endian.h>

