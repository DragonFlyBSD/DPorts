--- sources/utils/converter/ogg_tools.cxx.intermediate	2019-05-13 12:42:29.000000000 +0000
+++ sources/utils/converter/ogg_tools.cxx
@@ -5,6 +5,8 @@
 #include <dirent.h>
 #include <errno.h>
 #endif
+#include <stdio.h>
+#include <cstring>
 #include "ogg_tools.h"
 #include "xr_types.h"
 #include "xr_file_system.h"
