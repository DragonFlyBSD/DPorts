--- external/imguiFileDialog/ImGuiFileDialog.cpp.orig	2021-12-15 19:48:54 UTC
+++ external/imguiFileDialog/ImGuiFileDialog.cpp
@@ -61,7 +61,7 @@ SOFTWARE.
 	#ifndef PATH_MAX
 		#define PATH_MAX 260
 	#endif // PATH_MAX
-#elif defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__APPLE__) || defined (__EMSCRIPTEN__)
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__APPLE__) || defined (__EMSCRIPTEN__) || defined(__DragonFly__)
 	#define UNIX
 	#define stricmp strcasecmp
 	#include <sys/types.h>
