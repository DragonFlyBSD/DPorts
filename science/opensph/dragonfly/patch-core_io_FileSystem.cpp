--- core/io/FileSystem.cpp.intermediate	2021-12-20 11:44:27.000000000 +0000
+++ core/io/FileSystem.cpp
@@ -13,6 +13,7 @@
 #include <sys/types.h>
 #include <unistd.h>
 #endif
+#include <climits>	// for PATH_MAX
 
 NAMESPACE_SPH_BEGIN
 
@@ -429,7 +430,7 @@ bool FileSystem::setWorkingDirectory(con
 Expected<Path> FileSystem::getDirectoryOfExecutable() {
 #ifndef SPH_WIN
     char result[4096] = { '\0' };
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     ssize_t count = readlink("/proc/curproc/file", result, sizeof(result));
 #else
     ssize_t count = readlink("/proc/self/exe", result, sizeof(result));
