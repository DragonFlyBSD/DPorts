--- include/outcome/experimental/status-code/single-header/system_error2-nowindows.hpp.orig
+++ include/outcome/experimental/status-code/single-header/system_error2-nowindows.hpp
@@ -1729,6 +1729,16 @@
 SYSTEM_ERROR2_NAMESPACE_END
 #endif
 #include <cerrno> // for error constants
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
 SYSTEM_ERROR2_NAMESPACE_BEGIN
 //! The generic error coding (POSIX)
 enum class errc : int
