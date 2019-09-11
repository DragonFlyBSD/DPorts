--- lib/util.c.orig	2019-07-29 03:34:59 UTC
+++ lib/util.c
@@ -880,6 +880,9 @@ EXPORTED int parsehex(const char *p, con
 
 /* buffer handling functions */
 
+#ifdef __DragonFly__
+#undef roundup
+#endif
 static inline size_t roundup(size_t size)
     __attribute__((pure, always_inline, optimize("-O3")));
 static inline size_t roundup(size_t size)
