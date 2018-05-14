--- src/tools/io/io_shapes_las/las_export.cpp.orig	2018-05-02 10:26:28.000000000 +0000
+++ src/tools/io/io_shapes_las/las_export.cpp
@@ -61,9 +61,9 @@
 //---------------------------------------------------------
 #include "las_export.h"
 
-#include <liblas/laspoint.hpp>
-#include <liblas/laswriter.hpp>
-#include <liblas/capi/las_version.h>
+#include <liblas12/laspoint.hpp>
+#include <liblas12/laswriter.hpp>
+#include <liblas12/capi/las_version.h>
 #include <fstream>
 #include <iostream>
 #include <cstddef>
