--- rts/include/Rts.h.orig	2023-04-16 17:54:20 UTC
+++ rts/include/Rts.h
@@ -167,7 +167,7 @@ void _warnFail(const char *filename, uns
 #endif /* DEBUG */
 
 #if __STDC_VERSION__ >= 201112L
-#define GHC_STATIC_ASSERT(x, msg) static_assert((x), msg)
+#define GHC_STATIC_ASSERT(x, msg) _Static_assert((x), msg)
 #else
 #define GHC_STATIC_ASSERT(x, msg)
 #endif
