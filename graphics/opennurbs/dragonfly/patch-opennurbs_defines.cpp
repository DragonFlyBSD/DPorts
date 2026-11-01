--- opennurbs_defines.cpp.orig
+++ opennurbs_defines.cpp
@@ -495,8 +495,8 @@
   // returns number of files closed or EOF for error
 #if defined(ON_COMPILER_MSC)
   return _fcloseall(); // ANSI C name
-#elif defined(ON_RUNTIME_APPLE) || defined(ON_RUNTIME_ANDROID) || defined(ON_RUNTIME_WASM) || defined(__FreeBSD__) 
-  //fcloseall is not supported on mac/ios or android or FreeBSD
+#elif defined(ON_RUNTIME_APPLE) || defined(ON_RUNTIME_ANDROID) || defined(ON_RUNTIME_WASM) || defined(__FreeBSD__) || defined(__DragonFly__) 
+  //fcloseall is not supported on mac/ios or android or FreeBSD or DragonFly
   return EOF;
 #else
   return fcloseall();
