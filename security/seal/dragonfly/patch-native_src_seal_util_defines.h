--- native/src/seal/util/defines.h.orig	2021-05-18 19:24:46 UTC
+++ native/src/seal/util/defines.h
@@ -74,7 +74,7 @@ static_assert(sizeof(unsigned long long)
 
 #if defined(_WIN32)
 #define SEAL_SYSTEM SEAL_SYSTEM_WINDOWS
-#elif defined(__linux__) || defined(__FreeBSD__) || defined(EMSCRIPTEN) || (defined(__APPLE__) && defined(__MACH__))
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(EMSCRIPTEN) || (defined(__APPLE__) && defined(__MACH__)) || defined(__DragonFly__)
 #define SEAL_SYSTEM SEAL_SYSTEM_UNIX_LIKE
 #else
 #define SEAL_SYSTEM SEAL_SYSTEM_OTHER
