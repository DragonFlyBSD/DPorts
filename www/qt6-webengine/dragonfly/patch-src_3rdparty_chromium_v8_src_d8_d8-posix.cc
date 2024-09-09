diff --git v8/src/d8/d8-posix.cc v8/src/d8/d8-posix.cc
index c2571ef3a01..05f5cf7e9cb 100644
--- src/3rdparty/chromium/v8/src/d8/d8-posix.cc
+++ src/3rdparty/chromium/v8/src/d8/d8-posix.cc
@@ -339,7 +339,7 @@ static Local<Value> GetStdout(Isolate* isolate, int child_fd,
 // See http://code.google.com/p/v8/issues/detail?id=401.
 #if defined(WNOWAIT) && !defined(ANDROID) && !defined(__APPLE__) && \
     !defined(__NetBSD__) && !defined(__Fuchsia__)
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) || !defined(__DragonFly__)
 #define HAS_WAITID 1
 #endif
 #endif
