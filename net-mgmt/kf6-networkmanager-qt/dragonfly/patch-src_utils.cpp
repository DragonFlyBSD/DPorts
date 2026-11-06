--- src/utils.cpp.orig	2026-11-05 12:55:51 UTC
+++ src/utils.cpp
@@ -10,6 +10,11 @@
 #include "time.h"
 #include "utils.h"
 
+// DragonFly has no CLOCK_BOOTTIME; CLOCK_UPTIME counts from boot.
+#if defined(__DragonFly__) && !defined(CLOCK_BOOTTIME)
+#define CLOCK_BOOTTIME CLOCK_UPTIME
+#endif
+
 QHostAddress NetworkManager::ipv6AddressAsHostAddress(const QByteArray &address)
 {
     //     Q_ASSERT(address.size() == 16);
