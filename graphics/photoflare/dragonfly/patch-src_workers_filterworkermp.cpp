Use compile time OpenMP detection.

--- src/workers/filterworkermp.cpp.orig	2019-12-02 10:35:12 UTC
+++ src/workers/filterworkermp.cpp
@@ -22,7 +22,9 @@
 #include "PaintWidget.h"
 #include <vector>
 #include <cmath>
+#ifdef _OPENMP
 #include "omp.h"
+#endif
 
 //#include <QDebug>
 
@@ -50,13 +52,21 @@ void FilterWorkerMP::process()
 {
     QImage newImage = currentImage;
 
+#ifdef _OPENMP
     int maxThreads = omp_get_max_threads();
+#else
+    int maxThreads = 1;
+#endif
     int w = currentImage.width();
     int h = currentImage.height();
 
+#ifdef _OPENMP
     #pragma omp parallel shared(currentImage, newImage) firstprivate(maxThreads, w, h)
 {
     #pragma omp for schedule(dynamic) nowait
+#else
+{
+#endif
     for(int thread=0;thread<maxThreads;thread++) {
         int top = std::ceil(h/float(maxThreads))*thread;
         int bottom = std::min(h,int(std::ceil(h/float(maxThreads))*(thread+1)))-1;
