--- src/runtime_ccall.cpp.orig	2016-09-20 05:54:21.000000000 +0300
+++ src/runtime_ccall.cpp
@@ -12,7 +12,7 @@ using namespace llvm;
 // --- library symbol lookup ---
 
 // map from "libX" to full soname "libX.so.ver"
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 static uv_rwlock_t soname_lock;
 static std::map<std::string, std::string> sonameMap;
 static bool got_sonames = false;
