--- plugins/synthpod_common_nk.c.orig	2019-04-07 08:13:44 UTC
+++ plugins/synthpod_common_nk.c
@@ -59,6 +59,10 @@
 #define ALIAS_MAX 32
 #define DEFAULT_PSET_LABEL "DEFAULT"
 
+#if defined(__DragonFly__)
+#define exp10f(x) powf(10., x)
+#endif
+
 #ifdef Bool
 #	undef Bool // interferes with atom forge
 #endif
