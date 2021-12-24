--- src/MagickUtilities.h.orig	2021-08-19 20:40:39 UTC
+++ src/MagickUtilities.h
@@ -35,6 +35,8 @@
 // Exclude a warning message with IM6 headers
 #pragma GCC diagnostic push
 #pragma GCC diagnostic ignored "-Wignored-qualifiers"
+    #include <cmath>
+    using std::isnan;
     #include "Magick++.h"
 #pragma GCC diagnostic pop
 
