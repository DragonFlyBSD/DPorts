--- src/macros.c.orig	2026-10-26 02:34:41 UTC
+++ src/macros.c
@@ -41,6 +41,18 @@ the terms of the GNU LGPL.
 #define SET_BIRTHTIME_NS(stbuf, val) ((stbuf)->st_birthtimespec.tv_nsec = (val))
 #endif
 
+/* DragonFly's struct stat has no birth time */
+#if defined(__DragonFly__)
+#undef GET_BIRTHTIME
+#undef SET_BIRTHTIME
+#undef GET_BIRTHTIME_NS
+#undef SET_BIRTHTIME_NS
+#define GET_BIRTHTIME_NS(stbuf) (0)
+#define GET_BIRTHTIME(stbuf) (0)
+#define SET_BIRTHTIME_NS(stbuf, val) do {} while (0)
+#define SET_BIRTHTIME(stbuf, val) do {} while (0)
+#endif
+
 
 #if PLATFORM == PLATFORM_LINUX || PLATFORM == PLATFORM_BSD
 #define ASSIGN_DARWIN(x,y)
