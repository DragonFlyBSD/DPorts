--- opennurbs_locale.cpp.orig
+++ opennurbs_locale.cpp
@@ -32,7 +32,7 @@
     ON_C_locale = _create_locale(LC_ALL, "C");
 #elif defined(ON_RUNTIME_APPLE)
     ON_C_locale = _c_locale;
-#elif defined(ON_RUNTIME_ANDROID) || defined(ON_RUNTIME_LINUX) || defined(ON_RUNTIME_WASM) || defined(__FreeBSD__)
+#elif defined(ON_RUNTIME_ANDROID) || defined(ON_RUNTIME_LINUX) || defined(ON_RUNTIME_WASM) || defined(__FreeBSD__) || defined(__DragonFly__)
     ON_C_locale = 0;
 #else
     ON_C_locale = _create_locale(LC_ALL, "C");
@@ -101,7 +101,7 @@
     }
   }
   return newlocale(LC_ALL_MASK, apple_name, ON_CRT_C_locale() );
-#elif defined(ON_RUNTIME_ANDROID) || defined(ON_RUNTIME_LINUX) || defined(ON_RUNTIME_WASM) || defined(__FreeBSD__)
+#elif defined(ON_RUNTIME_ANDROID) || defined(ON_RUNTIME_LINUX) || defined(ON_RUNTIME_WASM) || defined(__FreeBSD__) || defined(__DragonFly__)
   return 0;
 #else
   return _create_locale(LC_ALL, locale);
@@ -1345,7 +1345,7 @@
   static bool Validate_sprintf_l()
   {
 #if defined(ON_COMPILER_CLANG) || defined(ON_COMPILER_GNU)
-#if defined(ON_RUNTIME_ANDROID) || defined(ON_RUNTIME_LINUX) || defined(ON_RUNTIME_WASM) || defined(__FreeBSD__)
+#if defined(ON_RUNTIME_ANDROID) || defined(ON_RUNTIME_LINUX) || defined(ON_RUNTIME_WASM) || defined(__FreeBSD__) || defined(__DragonFly__)
     // Test formatted printing
     char buffer[64] = { 0 };
     // Testing C-runtime - do not using ON_String::FormatIntoBuffer
@@ -1370,7 +1370,7 @@
   static bool Validate_sprintf_s_l()
   {
 #if defined(ON_COMPILER_CLANG) || defined(ON_COMPILER_GNU)
-#if defined(ON_RUNTIME_ANDROID) || defined(ON_RUNTIME_LINUX) || defined(ON_RUNTIME_WASM) || defined(__FreeBSD__)
+#if defined(ON_RUNTIME_ANDROID) || defined(ON_RUNTIME_LINUX) || defined(ON_RUNTIME_WASM) || defined(__FreeBSD__) || defined(__DragonFly__)
     // Test formatted printing
     char buffer[64] = { 0 };
     size_t buffer_capacity = (sizeof(buffer) / sizeof(buffer[0])) - 1;
@@ -1424,7 +1424,7 @@
   static bool Validate_sscanf_l()
   {
 #if defined(ON_COMPILER_CLANG) || defined(ON_COMPILER_GNU)
-#if defined(ON_RUNTIME_ANDROID) || defined(ON_RUNTIME_LINUX) || defined(ON_RUNTIME_WASM) || defined(__FreeBSD__)
+#if defined(ON_RUNTIME_ANDROID) || defined(ON_RUNTIME_LINUX) || defined(ON_RUNTIME_WASM) || defined(__FreeBSD__) || defined(__DragonFly__)
     // Test formatted scanning
     double a = ON_UNSET_VALUE;
     // Testing C-runtime - do not using ON_String::Scan
@@ -1449,7 +1449,7 @@
   static bool Validate_sscanf_s_l()
   {
 #if defined(ON_COMPILER_CLANG) || defined(ON_COMPILER_GNU)
-#if defined(ON_RUNTIME_ANDROID) || defined(ON_RUNTIME_LINUX) || defined(ON_RUNTIME_WASM) || defined(__FreeBSD__)
+#if defined(ON_RUNTIME_ANDROID) || defined(ON_RUNTIME_LINUX) || defined(ON_RUNTIME_WASM) || defined(__FreeBSD__) || defined(__DragonFly__)
     // Test formatted scanning
     double a = ON_UNSET_VALUE;
     // Testing C-runtime - do not using ON_String::Scan
