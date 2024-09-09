diff --git third_party/zlib/contrib/minizip/ioapi.h third_party/zlib/contrib/minizip/ioapi.h
index c1b7a54847f..09e2485ebb6 100644
--- src/3rdparty/chromium/third_party/zlib/contrib/minizip/ioapi.h
+++ src/3rdparty/chromium/third_party/zlib/contrib/minizip/ioapi.h
@@ -50,7 +50,7 @@
 #define ftello64 ftell
 #define fseeko64 fseek
 #else
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define fopen64 fopen
 #define ftello64 ftello
 #define fseeko64 fseeko
