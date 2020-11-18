Derefernces struct FILE

--- source/build/src/baselayer.cpp.orig	2020-08-28 06:34:00 UTC
+++ source/build/src/baselayer.cpp
@@ -570,7 +570,7 @@ int32_t baselayer_init(void)
 
 void maybe_redirect_outputs(void)
 {
-#if !(defined __APPLE__ && defined __BIG_ENDIAN__)
+#if !(defined __APPLE__ && defined __BIG_ENDIAN__) && !defined(__DragonFly__)
     char *argp;
 
     // pipe standard outputs to files
