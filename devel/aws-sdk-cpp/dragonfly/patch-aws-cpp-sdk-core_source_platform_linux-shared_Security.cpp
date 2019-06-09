--- aws-cpp-sdk-core/source/platform/linux-shared/Security.cpp.orig	2019-05-29 19:03:58 UTC
+++ aws-cpp-sdk-core/source/platform/linux-shared/Security.cpp
@@ -24,8 +24,10 @@ namespace Security
 
 void SecureMemClear(unsigned char *data, size_t length)
 {
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__bsdi__) || defined(__DragonFly__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__bsdi__)
     memset_s(data, length, 0, length);
+#elif defined(__DragonFly__)
+    explicit_bzero(data, length);
 #else
     memset(data, 0, length);
     asm volatile("" : "+m" (data));
