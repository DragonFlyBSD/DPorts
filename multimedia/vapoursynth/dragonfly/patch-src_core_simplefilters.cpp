--- src/core/simplefilters.cpp.orig	2023-06-06 12:15:18 UTC
+++ src/core/simplefilters.cpp
@@ -36,6 +36,7 @@
 #include "VapourSynth3.h" // only used for old colorfamily constant conversion in ShufflePlanes
 
 using namespace vsh;
+using namespace std;
 
 static inline uint32_t doubleToUInt32S(double v) {
     if (v < 0)
