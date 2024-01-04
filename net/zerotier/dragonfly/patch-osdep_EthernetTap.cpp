--- osdep/EthernetTap.cpp.orig	2023-09-14 19:09:26 UTC
+++ osdep/EthernetTap.cpp
@@ -39,9 +39,9 @@
 #include "WindowsEthernetTap.hpp"
 #endif // __WINDOWS__
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include "BSDEthernetTap.hpp"
-#endif // __FreeBSD__
+#endif // __FreeBSD__ || __DragonFly__
 
 #ifdef __NetBSD__
 #include "NetBSDEthernetTap.hpp"
@@ -129,9 +129,9 @@ std::shared_ptr<EthernetTap> EthernetTap
 	return std::shared_ptr<EthernetTap>(new WindowsEthernetTap(homePath,mac,mtu,metric,nwid,friendlyName,handler,arg));
 #endif // __WINDOWS__
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	return std::shared_ptr<EthernetTap>(new BSDEthernetTap(homePath,mac,mtu,metric,nwid,friendlyName,handler,arg));
-#endif // __FreeBSD__
+#endif // __FreeBSD__ || __DragonFly__
 
 #ifdef __NetBSD__
 	return std::shared_ptr<EthernetTap>(new NetBSDEthernetTap(homePath,mac,mtu,metric,nwid,friendlyName,handler,arg));
