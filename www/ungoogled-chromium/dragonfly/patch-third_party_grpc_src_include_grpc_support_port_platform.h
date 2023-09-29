diff --git third_party/grpc/src/include/grpc/support/port_platform.h third_party/grpc/src/include/grpc/support/port_platform.h
index 189c8141b80..9034a66d7bb 100644
--- third_party/grpc/src/include/grpc/support/port_platform.h
+++ third_party/grpc/src/include/grpc/support/port_platform.h
@@ -252,7 +252,7 @@
 #else /* _LP64 */
 #define GPR_ARCH_32 1
 #endif /* _LP64 */
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #define GPR_PLATFORM_STRING "freebsd"
 #ifndef _BSD_SOURCE
 #define _BSD_SOURCE
