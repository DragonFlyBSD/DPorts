--- src/App/ApplicationDirectories.cpp.orig
+++ src/App/ApplicationDirectories.cpp
@@ -33,6 +33,10 @@
 #if defined(FC_OS_LINUX) || defined(FC_OS_MACOSX) || defined(FC_OS_BSD)
 #include <pwd.h>
 #endif
+#if defined(FC_OS_BSD)
+#include <sys/types.h>
+#include <sys/sysctl.h>	// KERN_PROC_PATHNAME below
+#endif
 
 #include <Base/FileInfo.h>
 #include <Base/Exception.h>
