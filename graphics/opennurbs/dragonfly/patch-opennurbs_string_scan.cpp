--- opennurbs_string_scan.cpp.orig
+++ opennurbs_string_scan.cpp
@@ -82,8 +82,8 @@
   va_list args
   )
 {
-#if defined(ON_COMPILER_CLANG) || defined(ON_RUNTIME_LINUX) || defined(ON_RUNTIME_WASM)
-#if defined(ON_RUNTIME_ANDROID) || defined(ON_RUNTIME_LINUX) || defined(ON_RUNTIME_WASM) || defined(__FreeBSD__)
+#if defined(ON_COMPILER_CLANG) || defined(ON_RUNTIME_LINUX) || defined(ON_RUNTIME_WASM) || defined(__DragonFly__)
+#if defined(ON_RUNTIME_ANDROID) || defined(ON_RUNTIME_LINUX) || defined(ON_RUNTIME_WASM) || defined(__FreeBSD__) || defined(__DragonFly__)
   if (nullptr == buffer || nullptr == format)
     return -1;
   return vsscanf(buffer, format, args);
@@ -395,8 +395,8 @@
   local_buffer[local_buffer_count++] = 0;
 
   double x = value_on_failure;
-#if defined(ON_COMPILER_CLANG) || defined(ON_RUNTIME_LINUX) || defined(ON_RUNTIME_WASM)
-#if defined(ON_RUNTIME_ANDROID) || defined(ON_RUNTIME_LINUX) || defined(ON_RUNTIME_WASM) || defined(__FreeBSD__)
+#if defined(ON_COMPILER_CLANG) || defined(ON_RUNTIME_LINUX) || defined(ON_RUNTIME_WASM) || defined(__DragonFly__)
+#if defined(ON_RUNTIME_ANDROID) || defined(ON_RUNTIME_LINUX) || defined(ON_RUNTIME_WASM) || defined(__FreeBSD__) || defined(__DragonFly__)
   if (1 == sscanf(local_buffer, "%lg", &x))
   {
     *value = x;
@@ -657,8 +657,8 @@
   local_buffer[local_buffer_count++] = 0;
 
   double x = value_on_failure;
-#if defined(ON_COMPILER_CLANG) || defined(ON_RUNTIME_LINUX) || defined(ON_RUNTIME_WASM)
-#if defined(ON_RUNTIME_ANDROID) || defined(ON_RUNTIME_LINUX) || defined(ON_RUNTIME_WASM) || defined(__FreeBSD__)
+#if defined(ON_COMPILER_CLANG) || defined(ON_RUNTIME_LINUX) || defined(ON_RUNTIME_WASM) || defined(__DragonFly__)
+#if defined(ON_RUNTIME_ANDROID) || defined(ON_RUNTIME_LINUX) || defined(ON_RUNTIME_WASM) || defined(__FreeBSD__) || defined(__DragonFly__)
   if (1 == sscanf(local_buffer, "%lg", &x))
   {
     *value = x;
