--- include/outcome/experimental/status-code/include/status-code/generic_code.hpp.orig
+++ include/outcome/experimental/status-code/include/status-code/generic_code.hpp
@@ -28,6 +28,16 @@
 #include "status_error.hpp"
 
 #include <cerrno>  // for error constants
+// DragonFly lacks these; FreeBSD gets them from libc++ (errno.h).
+#ifndef ENOSR
+#define ENOSR 9922
+#endif
+#ifndef ENOSTR
+#define ENOSTR 9924
+#endif
+#ifndef ETIME
+#define ETIME 9935
+#endif
 
 #if defined(_MSC_VER) && !defined(__clang__)
 #pragma warning(push)
