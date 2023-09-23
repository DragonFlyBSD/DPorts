diff --git third_party/zlib/contrib/minizip/ioapi.h third_party/zlib/contrib/minizip/ioapi.h
index 8dcbdb06e35..7d733c043f0 100644
--- third_party/zlib/contrib/minizip/ioapi.h
+++ third_party/zlib/contrib/minizip/ioapi.h
@@ -50,7 +50,7 @@
 #define ftello64 ftell
 #define fseeko64 fseek
 #else
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define fopen64 fopen
 #define ftello64 ftello
 #define fseeko64 fseeko
