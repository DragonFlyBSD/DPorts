--- OrthancFramework/Sources/DicomNetworking/NetworkingCompatibility.h.orig
+++ OrthancFramework/Sources/DicomNetworking/NetworkingCompatibility.h
@@ -36,6 +36,11 @@
 #endif 
 
 
+#if !defined(_WIN32)
+/* DragonFly: libstdc++'s <string> does not pull in <limits.h>. */
+#  include <limits.h>
+#endif
+
 #if !defined(HOST_NAME_MAX) && defined(_POSIX_HOST_NAME_MAX)
 /**
  * TO IMPROVE: "_POSIX_HOST_NAME_MAX is only the minimum value that
