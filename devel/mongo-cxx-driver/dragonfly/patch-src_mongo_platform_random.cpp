--- src/mongo/platform/random.cpp.orig	2016-06-21 19:15:24 UTC
+++ src/mongo/platform/random.cpp
@@ -104,7 +104,7 @@ SecureRandom* SecureRandom::create() {
 }
 
 #elif defined(__linux__) || defined(__sunos__) || defined(__APPLE__) || defined(__FreeBSD__) || \
-    defined(__FreeBSD_kernel__) || defined(__gnu_hurd__)
+    defined(__FreeBSD_kernel__) || defined(__gnu_hurd__) || defined __DragonFly__
 
 class InputStreamSecureRandom : public SecureRandom {
 public:
