--- src/mongo/platform/random.cpp.orig	2019-01-31 23:00:29 UTC
+++ src/mongo/platform/random.cpp
@@ -147,7 +147,8 @@ std::unique_ptr<SecureRandom> SecureRand
     return stdx::make_unique<WinSecureRandom>();
 }
 
-#elif defined(__linux__) || defined(__sun) || defined(__APPLE__) || defined(__FreeBSD__)
+#elif defined(__linux__) || defined(__sun) || defined(__APPLE__) || defined(__FreeBSD__) || \
+      defined(__DragonFly__)
 
 class InputStreamSecureRandom : public SecureRandom {
 public:
