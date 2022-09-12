--- src/libutil/strutil.cpp.orig	2022-06-01 15:37:19 UTC
+++ src/libutil/strutil.cpp
@@ -17,7 +17,7 @@
 #include <sstream>
 #include <string>
 #include <vector>
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #    include <xlocale.h>
 #endif
 
@@ -56,7 +56,7 @@ static std::mutex output_mutex;
 
 // On systems that support it, get a location independent locale.
 #if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) \
-    || defined(__FreeBSD_kernel__) || defined(__GLIBC__)
+  || defined(__FreeBSD_kernel__) || defined(__GLIBC__) || defined(__DragonFly__)
 static locale_t c_loc = newlocale(LC_ALL_MASK, "C", nullptr);
 #elif defined(_WIN32)
 static _locale_t c_loc = _create_locale(LC_ALL, "C");
@@ -406,7 +406,7 @@ inline int
 strcasecmp(const char* a, const char* b)
 {
 #if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) \
-    || defined(__FreeBSD_kernel__) || defined(__GLIBC__)
+    || defined(__FreeBSD_kernel__) || defined(__GLIBC__) || defined(__DragonFly__)
     return strcasecmp_l(a, b, c_loc);
 #elif defined(_WIN32)
     return _stricmp_l(a, b, c_loc);
@@ -420,7 +420,7 @@ inline int
 strncasecmp(const char* a, const char* b, size_t size)
 {
 #if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) \
-    || defined(__FreeBSD_kernel__) || defined(__GLIBC__)
+    || defined(__FreeBSD_kernel__) || defined(__GLIBC__) || defined(__DragonFly__)
     return strncasecmp_l(a, b, size, c_loc);
 #elif defined(_WIN32)
     return _strnicmp_l(a, b, size, c_loc);
@@ -1490,7 +1490,7 @@ Strutil::strtof(const char* nptr, char**
     // On OSX, strtod_l is for some reason drastically faster than strtof_l.
     return static_cast<float>(strtod_l(nptr, endptr, c_loc));
 #elif defined(__linux__) || defined(__FreeBSD__) \
-    || defined(__FreeBSD_kernel__) || defined(__GLIBC__)
+    || defined(__FreeBSD_kernel__) || defined(__GLIBC__) || defined(__DragonFly__)
     return strtof_l(nptr, endptr, c_loc);
 #elif defined(_WIN32)
     // Windows has _strtod_l
@@ -1525,7 +1525,7 @@ Strutil::strtod(const char* nptr, char**
 {
     // Can use strtod_l on platforms that support it
 #if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) \
-    || defined(__FreeBSD_kernel__) || defined(__GLIBC__)
+    || defined(__FreeBSD_kernel__) || defined(__GLIBC__) || defined(__DragonFly__)
     // static initialization inside function is thread-safe by C++11 rules!
     return strtod_l(nptr, endptr, c_loc);
 #elif defined(_WIN32)
