--- xbmc/platform/posix/network/NetworkPosix.h.orig	2020-03-18 09:45:02 UTC
+++ xbmc/platform/posix/network/NetworkPosix.h
@@ -64,6 +64,8 @@ private:
 #include "platform/linux/network/NetworkLinux.h"
 #elif defined(HAS_FREEBSD_NETWORK)
 #include "platform/freebsd/network/NetworkFreebsd.h"
+#elif defined(HAS_DRAGONFLY_NETWORK)
+#include "platform/dragonfly/network/NetworkFreebsd.h"
 #elif defined(HAS_OSX_NETWORK)
 #include "platform/darwin/osx/network/NetworkOsx.h"
 #endif
