--- external/astyle/astyle_main.cpp.orig	2019-04-19 12:00:05 UTC
+++ external/astyle/astyle_main.cpp
@@ -60,6 +60,10 @@
 	#endif /* __VMS */
 #endif
 
+#ifdef __DragonFly__
+#include <limits.h> // for PATH_MAX
+#endif
+
 //-----------------------------------------------------------------------------
 // declarations
 //-----------------------------------------------------------------------------
