--- plugins/libimhex/include/hex/helpers/utils.hpp.orig	2021-02-18 16:11:50 UTC
+++ plugins/libimhex/include/hex/helpers/utils.hpp
@@ -17,7 +17,7 @@
 #include <arpa/inet.h>
 #endif
 
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
     #define off64_t off_t
     #define fopen64 fopen
     #define fseeko64 fseek
