--- folly/portability/Stdlib.cpp.orig
+++ folly/portability/Stdlib.cpp
@@ -146,7 +146,8 @@
 
 #endif
 
-#if !defined(__linux__) && !defined(__FreeBSD__) && !defined(__wasm__)
+#if !defined(__linux__) && !defined(__FreeBSD__) && !defined(__DragonFly__) && \
+    !defined(__wasm__)
 
 #include <string>
 #include <vector>
