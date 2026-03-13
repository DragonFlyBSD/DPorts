--- Source/ThirdParty/ANGLE/src/common/SimpleMutex.h.intermediate	Tue Oct  7 06:47:46 2025
+++ Source/ThirdParty/ANGLE/src/common/SimpleMutex.h	Wed Oct
@@ -42,7 +42,7 @@
 // Assume support.
 #        define ANGLE_USE_FUTEX 1
 #    endif  // defined(ANGLE_PLATFORM_LINUX) || defined(ANGLE_PLATFORM_ANDROID)
-#    if defined(ANGLE_PLATFORM_FREEBSD) || defined(ANGLE_PLATFORM_OPENBSD)
+#    if defined(ANGLE_PLATFORM_FREEBSD) || defined(ANGLE_PLATFORM_OPENBSD) || defined(ANGLE_PLATFORM_DRAGONFLY)
 #        define ANGLE_USE_FUTEX 0
 #    endif
 #endif      // !defined(ANGLE_WITH_TSAN)
