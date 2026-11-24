--- src/main-fuse.cpp.orig
+++ src/main-fuse.cpp
@@ -4,6 +4,9 @@
 #include <cstdio>
 #include "be.h"
 #include <errno.h>
+#ifndef ENODATA
+#define ENODATA ENOATTR	/* the BSD "no such attribute" */
+#endif
 #include <stdexcept>
 #include <limits>
 #include <functional>
