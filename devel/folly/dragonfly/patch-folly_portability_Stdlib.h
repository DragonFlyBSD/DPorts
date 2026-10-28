--- folly/portability/Stdlib.h.orig
+++ folly/portability/Stdlib.h
@@ -48,7 +48,7 @@
 #define environ (*_NSGetEnviron())
 #endif
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 // Needed to resolve linkage
 extern char** environ;
 #endif
@@ -57,7 +57,8 @@
 namespace folly {
 namespace portability {
 namespace stdlib {
-#if !defined(__linux__) && !defined(__FreeBSD__) && !defined(__wasm__)
+#if !defined(__linux__) && !defined(__FreeBSD__) && !defined(__DragonFly__) && \
+    !defined(__wasm__)
 int clearenv();
 #endif
 
