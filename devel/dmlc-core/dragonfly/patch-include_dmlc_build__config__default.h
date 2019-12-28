--- include/dmlc/build_config_default.h.orig	2019-12-10 23:13:29 UTC
+++ include/dmlc/build_config_default.h
@@ -10,7 +10,7 @@
 
 /* default logic for fopen64 */
 #if DMLC_USE_FOPEN64 && \
-  (!defined(__GNUC__) || (defined __ANDROID__) || (defined __FreeBSD__) \
+  (!defined(__GNUC__) || (defined __ANDROID__) || (defined __FreeBSD__) || defined(__DragonFly__) \
   || (defined __APPLE__) || ((defined __MINGW32__) && !(defined __MINGW64__)) \
   || (defined __CYGWIN__) )
   #define DMLC_EMIT_FOPEN64_REDEFINE_WARNING
