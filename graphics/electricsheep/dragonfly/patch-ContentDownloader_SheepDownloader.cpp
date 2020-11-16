--- ContentDownloader/SheepDownloader.cpp.intermediate	2019-05-08 00:04:24.000000000 +0000
+++ ContentDownloader/SheepDownloader.cpp
@@ -41,7 +41,7 @@
 #include <sys/param.h>
 #include <sys/mount.h>
 #endif
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/param.h>
 #include <sys/mount.h>
 #elif defined(LINUX_GNU)
