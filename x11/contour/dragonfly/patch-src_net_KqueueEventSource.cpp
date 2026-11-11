--- src/net/KqueueEventSource.cpp.orig
+++ src/net/KqueueEventSource.cpp
@@ -1,7 +1,7 @@
 // SPDX-License-Identifier: Apache-2.0
 #include <net/KqueueEventSource.hpp>
 
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#if defined(__APPLE__) || (defined(__FreeBSD__) || defined(__DragonFly__)) || defined(__OpenBSD__) || defined(__NetBSD__)
 
     #include <sys/event.h>
     #include <sys/types.h>
