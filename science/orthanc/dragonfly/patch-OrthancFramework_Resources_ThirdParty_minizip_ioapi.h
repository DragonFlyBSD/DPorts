--- OrthancFramework/Resources/ThirdParty/minizip/ioapi.h.orig	2021-11-14 16:49:18.143267000 +0100
+++ OrthancFramework/Resources/ThirdParty/minizip/ioapi.h	2021-11-14 16:49:36.052871000 +0100
@@ -50,7 +50,7 @@
 #define ftello64 ftell
 #define fseeko64 fseek
 #else
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define fopen64 fopen
 #define ftello64 ftello
 #define fseeko64 fseeko
