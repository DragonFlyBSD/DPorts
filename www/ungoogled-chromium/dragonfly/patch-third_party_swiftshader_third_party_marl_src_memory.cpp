diff --git third_party/swiftshader/third_party/marl/src/memory.cpp third_party/swiftshader/third_party/marl/src/memory.cpp
index abecf15baf3..91c3f689c6d 100644
--- third_party/swiftshader/third_party/marl/src/memory.cpp
+++ third_party/swiftshader/third_party/marl/src/memory.cpp
@@ -19,7 +19,8 @@
 
 #include <cstring>
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__APPLE__) || defined(__EMSCRIPTEN__) || defined(__OpenBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__APPLE__) || defined(__EMSCRIPTEN__) || defined(__OpenBSD__) || \
+	defined(__DragonFly__)
 #include <sys/mman.h>
 #include <unistd.h>
 namespace {
