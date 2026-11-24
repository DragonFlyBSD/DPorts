--- src/libmw/deps/ghc/include/ghc/filesystem.hpp.orig
+++ src/libmw/deps/ghc/include/ghc/filesystem.hpp
@@ -50,7 +50,7 @@
 
 #if defined(__APPLE__) && defined(__MACH__)
 #define GHC_OS_MACOS
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 // use FreeBSD int strerror_r() instead of GNU char *strerror_r()
 #define _POSIX_C_SOURCE 200112L
 #if defined(__clang__) && defined(_GNU_SOURCE)
