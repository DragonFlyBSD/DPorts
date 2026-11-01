--- vendor/libbase/logging.cpp.orig
+++ vendor/libbase/logging.cpp
@@ -26,7 +26,7 @@
 #include <time.h>
 
 // For getprogname(3) or program_invocation_short_name.
-#if defined(__ANDROID__) || defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__ANDROID__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <stdlib.h>
 #elif defined(__GLIBC__)
 #include <errno.h>
@@ -62,7 +62,7 @@
 namespace base {
 
 // BSD-based systems like Android/macOS/FreeBSD have getprogname(). Others need us to provide one.
-#if !defined(__APPLE__) && !defined(__BIONIC__) && !defined(__FreeBSD__)
+#if !defined(__APPLE__) && !defined(__BIONIC__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 static const char* getprogname() {
 #ifdef _WIN32
   static bool first = true;
