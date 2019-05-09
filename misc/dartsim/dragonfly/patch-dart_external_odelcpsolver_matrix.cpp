--- dart/external/odelcpsolver/matrix.cpp.intermediate	2019-05-07 20:44:03.000000000 +0000
+++ dart/external/odelcpsolver/matrix.cpp
@@ -23,7 +23,7 @@
 //#include "config.h"
 #ifdef __APPLE__
   #include <malloc/malloc.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   #include <stdlib.h>
 #else
   #include <malloc.h>
