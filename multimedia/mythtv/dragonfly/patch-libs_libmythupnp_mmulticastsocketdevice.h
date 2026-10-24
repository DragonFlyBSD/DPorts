--- libs/libmythupnp/mmulticastsocketdevice.h.intermediate	2016-07-20 09:49:01 UTC
+++ libs/libmythupnp/mmulticastsocketdevice.h
@@ -13,7 +13,7 @@
 #ifndef _MULTICAST_SOCKET_DEVICE_H_
 #define _MULTICAST_SOCKET_DEVICE_H_
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <sys/types.h>
 #endif
 
