--- ext/socket/sagittarius-socket.c.orig	2019-06-09 21:33:58 UTC
+++ ext/socket/sagittarius-socket.c
@@ -66,7 +66,7 @@ typedef long suseconds_t;
    Even though it said it's fixed HOWEVER h, on FreeBSD 9.1 it still
    returns EAI_BADFLAGS! so we set this 0
  */
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #undef AI_V4MAPPED
 #define AI_V4MAPPED 0
 #endif
