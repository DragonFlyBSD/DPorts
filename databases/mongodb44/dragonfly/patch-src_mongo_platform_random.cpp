--- src/mongo/platform/random.cpp.orig	2022-11-01 18:21:44 UTC
+++ src/mongo/platform/random.cpp
@@ -57,7 +57,7 @@
 #ifdef _WIN32
 #define SECURE_RANDOM_BCRYPT
 #elif defined(__linux__) || defined(__sun) || defined(__APPLE__) || defined(__FreeBSD__) || \
-    defined(__EMSCRIPTEN__)
+  defined(__EMSCRIPTEN__) || defined(__DragonFly__)
 #define SECURE_RANDOM_URANDOM
 #elif defined(__OpenBSD__)
 #define SECURE_RANDOM_ARCFOUR
