--- src/FoundationClasses/TKernel/OSD/OSD_Chronometer.cxx.orig
+++ src/FoundationClasses/TKernel/OSD/OSD_Chronometer.cxx
@@ -53,7 +53,7 @@
 void OSD_Chronometer::GetProcessCPU(double& theUserSeconds, double& theSystemSeconds)
 {
   #if defined(__linux__) || defined(__FreeBSD__) || defined(__ANDROID__) || defined(__QNX__)       \
-    || defined(__EMSCRIPTEN__)
+    || defined(__EMSCRIPTEN__) || defined(__DragonFly__)
   static const long aCLK_TCK = sysconf(_SC_CLK_TCK);
   #else
   static const long aCLK_TCK = CLK_TCK;
