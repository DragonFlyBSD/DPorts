--- src/tools/io/io_shapes_las/las_import.cpp.orig	2018-05-02 10:26:28.000000000 +0000
+++ src/tools/io/io_shapes_las/las_import.cpp
@@ -60,9 +60,9 @@
 //---------------------------------------------------------
 #include "las_import.h"
 
-#include <liblas/laspoint.hpp>
-#include <liblas/lasreader.hpp>
-#include <liblas/capi/las_version.h>
+#include <liblas12/laspoint.hpp>
+#include <liblas12/lasreader.hpp>
+#include <liblas12/capi/las_version.h>
 #include <fstream>
 #include <iostream>
 
