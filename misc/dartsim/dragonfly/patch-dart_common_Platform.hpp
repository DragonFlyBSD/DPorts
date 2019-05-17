--- dart/common/Platform.hpp.intermediate	2019-05-07 20:44:03 UTC
+++ dart/common/Platform.hpp
@@ -43,7 +43,7 @@
 #define DART_ARCH_32BITS   1
 #endif
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 
 #define DART_OS_FREEBSD      1
 #if __x86_64__ || __ppc64__
