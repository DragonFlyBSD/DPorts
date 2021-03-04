--- architecture/faust/dsp/faust-dynamic-engine.cpp.intermediate	2021-03-04 17:57:04.000000000 +0000
+++ architecture/faust/dsp/faust-dynamic-engine.cpp
@@ -57,7 +57,7 @@
 
 #endif
 
-#if defined(_WIN32) || defined(__APPLE__) || defined(__linux__) || defined(__FreeBSD__)
+#if defined(_WIN32) || defined(__APPLE__) || defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
     #define HAS_JACK 1
 #endif 
 
