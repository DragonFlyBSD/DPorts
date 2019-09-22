--- osdep/EthernetTap.cpp.orig	2019-09-22 14:01:27 UTC
+++ osdep/EthernetTap.cpp
@@ -56,6 +56,10 @@
 #include "BSDEthernetTap.hpp"
 #endif // __FreeBSD__
 
+#ifdef __DragonFly__
+#include "BSDEthernetTap.hpp"
+#endif // __DragonFly__
+
 #ifdef __NetBSD__
 #include "NetBSDEthernetTap.hpp"
 #endif // __NetBSD__
@@ -116,6 +120,10 @@ std::shared_ptr<EthernetTap> EthernetTap
 	return std::shared_ptr<EthernetTap>(new BSDEthernetTap(homePath,mac,mtu,metric,nwid,friendlyName,handler,arg));
 #endif // __FreeBSD__
 
+#ifdef __DragonFly__
+	return std::shared_ptr<EthernetTap>(new BSDEthernetTap(homePath,mac,mtu,metric,nwid,friendlyName,handler,arg));
+#endif // __DragonFly__
+
 #ifdef __NetBSD__
 	return std::shared_ptr<EthernetTap>(new NetBSDEthernetTap(homePath,mac,mtu,metric,nwid,friendlyName,handler,arg));
 #endif // __NetBSD__
