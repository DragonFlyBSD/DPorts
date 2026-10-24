--- src/OSD/OSD_Chronometer.cxx.orig
+++ src/OSD/OSD_Chronometer.cxx
@@ -51,7 +51,7 @@
 void OSD_Chronometer::GetProcessCPU (Standard_Real& theUserSeconds,
                                      Standard_Real& theSystemSeconds)
 {
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__ANDROID__) || defined(__QNX__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__ANDROID__) || defined(__QNX__) || defined(__DragonFly__)
   static const long aCLK_TCK = sysconf(_SC_CLK_TCK);
 #else
   static const long aCLK_TCK = CLK_TCK;
