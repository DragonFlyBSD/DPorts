--- src/io.c.intermediate	2026-09-10 16:52:00 UTC
+++ src/io.c
@@ -51,7 +51,7 @@ static avif_off_t avif_ftello(FILE * stream)
 
 #if defined(AVIF_USE_FSEEKO)
 // POSIX large file support
-static_assert(sizeof(off_t) == sizeof(int64_t), "");
+_Static_assert(sizeof(off_t) == sizeof(int64_t), "");
 typedef off_t avif_off_t;
 #define AVIF_OFF_MAX INT64_MAX
 
