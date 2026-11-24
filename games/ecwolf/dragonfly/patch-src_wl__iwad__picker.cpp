--- src/wl_iwad_picker.cpp.orig
+++ src/wl_iwad_picker.cpp
@@ -27,7 +27,7 @@
 int I_PickIWad_Cocoa (WadStuff *wads, int numwads, bool showwin, int defaultiwad);
 #elif defined(__ANDROID__)
 int I_PickIWad_Android (WadStuff *wads, int numwads, bool showwin, int defaultiwad);
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/wait.h>
 #endif
 
