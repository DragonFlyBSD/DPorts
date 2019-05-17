--- libopenage/util/os.cpp.orig	2018-07-03 16:23:39 UTC
+++ libopenage/util/os.cpp
@@ -14,7 +14,7 @@
 #include <mach-o/dyld.h>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #endif
@@ -72,7 +72,7 @@ std::string self_exec_filename() {
 
 		return std::string{buf.get()};
 	}
-#elif __FreeBSD__
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 	size_t bufsize = 1024;
 	int mib[4] = {
 		CTL_KERN,
