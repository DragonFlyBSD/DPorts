--- src/libutil/strutil.cpp.orig
+++ src/libutil/strutil.cpp
@@ -26,7 +26,7 @@
 #include <sstream>
 #include <string>
 #include <vector>
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #    include <xlocale.h>
 #endif
 #ifdef _WIN32
@@ -79,7 +79,7 @@
 // On systems that support it, get a location independent locale.
 #if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) \
     || defined(__FreeBSD_kernel__) || defined(__OpenBSD__)           \
-    || defined(__GLIBC__) || defined(__NetBSD__)
+    || defined(__GLIBC__) || defined(__NetBSD__) || defined(__DragonFly__)
 static locale_t c_loc = newlocale(LC_ALL_MASK, "C", nullptr);
 #elif defined(_WIN32)
 static _locale_t c_loc = _create_locale(LC_ALL, "C");
@@ -522,7 +522,7 @@
 {
 #if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) \
     || defined(__FreeBSD_kernel__) || defined(__OpenBSD__)           \
-    || defined(__GLIBC__)
+    || defined(__GLIBC__) || defined(__DragonFly__)
     return strcasecmp_l(a, b, c_loc);
 #elif defined(_WIN32)
     return _stricmp_l(a, b, c_loc);
@@ -545,7 +545,7 @@
 {
 #if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) \
     || defined(__FreeBSD_kernel__) || defined(__OpenBSD__)           \
-    || defined(__GLIBC__)
+    || defined(__GLIBC__) || defined(__DragonFly__)
     return strncasecmp_l(a, b, size, c_loc);
 #elif defined(_WIN32)
     return _strnicmp_l(a, b, size, c_loc);
@@ -1724,7 +1724,7 @@
     // On OSX, strtod_l is for some reason drastically faster than strtof_l.
     return static_cast<float>(strtod_l(nptr, endptr, c_loc));
 #elif defined(__linux__) || defined(__FreeBSD__) \
-    || defined(__FreeBSD_kernel__) || defined(__GLIBC__)
+    || defined(__FreeBSD_kernel__) || defined(__GLIBC__) || defined(__DragonFly__)
     return strtof_l(nptr, endptr, c_loc);
 #elif defined(_WIN32)
     // Windows has _strtod_l
@@ -1759,7 +1759,7 @@
 {
     // Can use strtod_l on platforms that support it
 #if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) \
-    || defined(__FreeBSD_kernel__) || defined(__GLIBC__)
+    || defined(__FreeBSD_kernel__) || defined(__GLIBC__) || defined(__DragonFly__)
     return strtod_l(nptr, endptr, c_loc);
 #elif defined(_WIN32)
     // Windows has _strtod_l
