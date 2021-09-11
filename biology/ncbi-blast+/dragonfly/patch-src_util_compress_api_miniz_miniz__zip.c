--- src/util/compress/api/miniz/miniz_zip.c.orig	2020-11-25 18:11:01 UTC
+++ src/util/compress/api/miniz/miniz_zip.c
@@ -97,7 +97,7 @@ static FILE *mz_freopen(const char *pPat
 #define MZ_FFLUSH fflush
 #define MZ_FREOPEN(f, m, s) freopen(f, m, s)
 #define MZ_DELETE_FILE remove
-#elif defined(__GNUC__) && defined(_LARGEFILE64_SOURCE)
+#elif defined(__GNUC__) && defined(_LARGEFILE64_SOURCE) && !defined(__DragonFly__)
 #ifndef MINIZ_NO_TIME
 #include <utime.h>
 #endif
