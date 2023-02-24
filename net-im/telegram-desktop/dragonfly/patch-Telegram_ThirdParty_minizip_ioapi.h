--- Telegram/ThirdParty/minizip/ioapi.h.orig	2022-12-30 12:16:35 UTC
+++ Telegram/ThirdParty/minizip/ioapi.h
@@ -50,7 +50,8 @@
 #define ftello64 ftell
 #define fseeko64 fseek
 #else
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || \
+    defined(__DragonFly__)
 #define fopen64 fopen
 #define ftello64 ftello
 #define fseeko64 fseeko
