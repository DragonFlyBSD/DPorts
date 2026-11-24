--- libopenage/util/os.cpp.orig
+++ libopenage/util/os.cpp
@@ -14,7 +14,7 @@
 	#include <mach-o/dyld.h>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	#include <sys/sysctl.h>
 	#include <sys/types.h>
 #endif
@@ -71,7 +71,7 @@
 
 		return std::string{buf.get()};
 	}
-#elif __FreeBSD__
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 	size_t bufsize = 1024;
 	int mib[4] = {
 		CTL_KERN,
