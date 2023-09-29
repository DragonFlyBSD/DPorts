diff --git third_party/libevent/event-config.h third_party/libevent/event-config.h
index 22c4b2e6fbf..fab4b729f3a 100644
--- third_party/libevent/event-config.h
+++ third_party/libevent/event-config.h
@@ -11,7 +11,7 @@
 #include "third_party/libevent/android/event-config.h"
 #elif defined(__linux__)
 #include "third_party/libevent/linux/event-config.h"
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include "third_party/libevent/freebsd/event-config.h"
 #elif defined(__sun)
 #include "third_party/libevent/solaris/event-config.h"
