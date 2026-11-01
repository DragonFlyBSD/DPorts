--- vendor/logging/liblog/logger_write.cpp.orig
+++ vendor/logging/liblog/logger_write.cpp
@@ -118,7 +118,7 @@
 }
 
 // BSD-based systems like Android/macOS/FreeBSD have getprogname(). Others need us to provide one.
-#if !defined(__APPLE__) && !defined(__BIONIC__) && !defined(__FreeBSD__)
+#if !defined(__APPLE__) && !defined(__BIONIC__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 static const char* getprogname() {
 #ifdef _WIN32
   static bool first = true;
