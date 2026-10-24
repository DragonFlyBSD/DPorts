diff --git third_party/angle/src/common/platform.h third_party/angle/src/common/platform.h
index c0d7eb184518..dbb133296759 100644
--- third_party/angle/src/common/platform.h
+++ third_party/angle/src/common/platform.h
@@ -31,8 +31,12 @@
 #    define ANGLE_PLATFORM_FREEBSD 1
 #    define ANGLE_PLATFORM_POSIX 1
 #    define ANGLE_PLATFORM_BSD 1
+#elif defined(__DragonFly__)
+#    define ANGLE_PLATFORM_DRAGONFLY 1
+#    define ANGLE_PLATFORM_POSIX 1
+#    define ANGLE_PLATFORM_BSD 1
 #elif defined(__NetBSD__) ||              \
-    defined(__DragonFly__) || defined(__sun) || defined(__GLIBC__) || defined(__GNU__) || \
+    defined(__sun) || defined(__GLIBC__) || defined(__GNU__) || \
     defined(__QNX__) || defined(__Fuchsia__) || defined(__HAIKU__)
 #    define ANGLE_PLATFORM_POSIX 1
 #else
