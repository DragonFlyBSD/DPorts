--- include/dmlc/endian.h.orig	2019-12-10 23:13:29 UTC
+++ include/dmlc/endian.h
@@ -18,7 +18,7 @@
         || defined(__ANDROID__) || defined(__RISCV__)
     #include <endian.h>
     #define DMLC_LITTLE_ENDIAN (__BYTE_ORDER == __LITTLE_ENDIAN)
-  #elif defined(__FreeBSD__) || defined(__OpenBSD__)
+  #elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
     #include <sys/endian.h>
     #define DMLC_LITTLE_ENDIAN (_BYTE_ORDER == _LITTLE_ENDIAN)
   #elif defined(__EMSCRIPTEN__) || defined(__hexagon__)
