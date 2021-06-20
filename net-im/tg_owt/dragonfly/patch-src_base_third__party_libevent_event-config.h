--- src/base/third_party/libevent/event-config.h.orig	2021-02-03 11:42:41 UTC
+++ src/base/third_party/libevent/event-config.h
@@ -13,7 +13,7 @@
 #include "base/third_party/libevent/android/event-config.h"
 #elif defined(__linux__)
 #include "base/third_party/libevent/linux/event-config.h"
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include "base/third_party/libevent/freebsd/event-config.h"
 #elif defined(__sun)
 #include "base/third_party/libevent/solaris/event-config.h"
