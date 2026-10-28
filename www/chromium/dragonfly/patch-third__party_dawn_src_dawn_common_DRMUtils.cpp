--- third_party/dawn/src/dawn/common/DRMUtils.cpp.orig
+++ third_party/dawn/src/dawn/common/DRMUtils.cpp
@@ -30,7 +30,7 @@
 #include <dirent.h>
 #include <fcntl.h>
 #include <sys/stat.h>
-#if !defined(__OpenBSD__) && !defined(__FreeBSD__)
+#if !defined(__OpenBSD__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <sys/sysmacros.h>
 #endif
 
