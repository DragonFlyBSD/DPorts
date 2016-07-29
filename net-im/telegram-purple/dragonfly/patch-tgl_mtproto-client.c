--- tgl/mtproto-client.c.orig	2016-02-27 16:10:53.000000000 +0200
+++ tgl/mtproto-client.c
@@ -33,7 +33,7 @@
 #include <signal.h>
 #include <unistd.h>
 #include <fcntl.h>
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined (__DragonFly__) || defined(__FreeBSD__) || defined(__OpenBSD__)
 #include <sys/endian.h>
 #endif
 #include <sys/types.h>
@@ -67,7 +67,7 @@
 #include "auto.h"
 #include "tgl-methods-in.h"
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define __builtin_bswap32(x) bswap32(x)
 #endif
 
@@ -83,7 +83,7 @@
 static long long generate_next_msg_id (struct tgl_state *TLS, struct tgl_dc *DC, struct tgl_session *S);
 static double get_server_time (struct tgl_dc *DC);
 
-#if !defined(HAVE___BUILTIN_BSWAP32) && !defined(__FreeBSD__) && !defined(__OpenBSD__)
+#if !defined(HAVE___BUILTIN_BSWAP32) && !defined(__DragonFly__) && !defined(__FreeBSD__) && !defined(__OpenBSD__)
 static inline unsigned __builtin_bswap32(unsigned x) {
   return ((x << 24) & 0xff000000 ) |
   ((x << 8) & 0x00ff0000 ) |
