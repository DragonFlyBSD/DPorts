diff --git third_party/swiftshader/src/Reactor/Debug.cpp third_party/swiftshader/src/Reactor/Debug.cpp
index d4c16fc2f0e..95ecfa2d589 100644
--- third_party/swiftshader/src/Reactor/Debug.cpp
+++ third_party/swiftshader/src/Reactor/Debug.cpp
@@ -46,7 +46,8 @@ namespace {
 
 bool IsUnderDebugger()
 {
-#if defined(PTRACE) && !defined(__APPLE__) && !defined(__MACH__) && !defined(__OpenBSD__) && !defined(__FreeBSD__)
+#if defined(PTRACE) && !defined(__APPLE__) && !defined(__MACH__) && !defined(__OpenBSD__) && !defined(__FreeBSD__) && \
+	!defined(__DragonFly__)
 	static bool checked = false;
 	static bool res = false;
 
