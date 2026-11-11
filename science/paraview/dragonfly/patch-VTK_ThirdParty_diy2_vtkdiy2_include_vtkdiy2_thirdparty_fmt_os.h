--- VTK/ThirdParty/diy2/vtkdiy2/include/vtkdiy2/thirdparty/fmt/os.h.orig
+++ VTK/ThirdParty/diy2/vtkdiy2/include/vtkdiy2/thirdparty/fmt/os.h
@@ -19,7 +19,7 @@
 #include <cstdio>
 #include <cstdlib>  // for strtod_l
 
-#if defined __APPLE__ || defined(__FreeBSD__)
+#if defined __APPLE__ || (defined(__FreeBSD__)||defined(__DragonFly__))
 #  include <xlocale.h>  // for LC_NUMERIC_MASK on OS X
 #endif
 
