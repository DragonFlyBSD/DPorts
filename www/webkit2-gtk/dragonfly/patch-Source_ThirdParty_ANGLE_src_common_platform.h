--- Source/ThirdParty/ANGLE/src/common/platform.h.intermediate	Tue Oct  7 06:47:46 2025
+++ Source/ThirdParty/ANGLE/src/common/platform.h	Wed Oct
@@ -30,6 +30,10 @@
 #    define ANGLE_PLATFORM_FREEBSD 1
 #    define ANGLE_PLATFORM_POSIX 1
 #    define ANGLE_PLATFORM_BSD 1
+#elif defined(__DragonFly__)
+#    define ANGLE_PLATFORM_DRAGONFLY 1
+#    define ANGLE_PLATFORM_POSIX 1
+#    define ANGLE_PLATFORM_BSD 1
 #elif defined(__OpenBSD__)
 #    define ANGLE_PLATFORM_OPENBSD 1
 #    define ANGLE_PLATFORM_POSIX 1
