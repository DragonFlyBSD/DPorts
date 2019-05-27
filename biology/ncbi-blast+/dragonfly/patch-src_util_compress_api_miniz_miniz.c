--- src/util/compress/api/miniz/miniz.c.orig	2014-10-02 20:22:01.000000000 +0300
+++ src/util/compress/api/miniz/miniz.c
@@ -2979,7 +2979,7 @@ void tinfl_decompressor_free(tinfl_decom
     #define MZ_FFLUSH fflush
     #define MZ_FREOPEN(f, m, s) freopen(f, m, s)
     #define MZ_DELETE_FILE remove
-  #elif defined(__GNUC__) && _LARGEFILE64_SOURCE
+  #elif defined(__GNUC__) && _LARGEFILE64_SOURCE && !defined(__DragonFly__)
     #ifndef MINIZ_NO_TIME
       #include <utime.h>
     #endif
