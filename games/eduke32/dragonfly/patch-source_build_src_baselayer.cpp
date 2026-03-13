--- source/build/src/baselayer.cpp.orig	2026-02-13 22:05:42.123844000 +0100
+++ source/build/src/baselayer.cpp	2026-02-13 22:06:44.524339000 +0100
@@ -862,7 +862,7 @@ int32_t baselayer_init(void)
 
 void maybe_redirect_outputs(void)
 {
-#if !(defined __APPLE__ && defined __BIG_ENDIAN__)
+#if !(defined __APPLE__ && defined __BIG_ENDIAN__) && !defined __DragonFly__
     char *argp;
 
     // pipe standard outputs to files
