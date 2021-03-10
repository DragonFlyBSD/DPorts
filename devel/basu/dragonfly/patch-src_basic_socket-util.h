--- src/basic/socket-util.h.orig	2021-01-06 13:56:51 UTC
+++ src/basic/socket-util.h
@@ -23,7 +23,7 @@ union sockaddr_union {
         struct sockaddr_un un;
 };
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 struct ucred {
         uint32_t pid;
         uint32_t uid;
