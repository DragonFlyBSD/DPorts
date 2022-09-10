--- src/glog/platform.h.orig	2022-04-04 22:03:27 UTC
+++ src/glog/platform.h
@@ -50,6 +50,8 @@
 #define GLOG_OS_NETBSD
 #elif defined(__OpenBSD__)
 #define GLOG_OS_OPENBSD
+#elif defined(__DragonFly__)
+#define GLOG_OS_DRAGONFLY
 #else
 // TODO(hamaji): Add other platforms.
 #error Platform not supported by glog. Please consider to contribute platform information by submitting a pull request on Github.
