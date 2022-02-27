--- src/LV2/DSP/gx_common.h.orig	2021-12-10 17:53:33 UTC
+++ src/LV2/DSP/gx_common.h
@@ -29,6 +29,7 @@
 #include <cstring>
 #include <unistd.h>
 
+using std::signbit;
 ///////////////////////// DENORMAL PROTECTION WITH SSE /////////////////
 
 #ifdef __SSE__
