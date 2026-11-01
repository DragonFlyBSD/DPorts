--- osdep/EthernetTap.cpp.orig
+++ osdep/EthernetTap.cpp
@@ -37,7 +37,7 @@
 #include "WindowsEthernetTap.hpp"
 #endif	 // __WINDOWS__
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include "BSDEthernetTap.hpp"
 #endif	 // __FreeBSD__
 
@@ -123,7 +123,7 @@
 	return std::shared_ptr<EthernetTap>(new WindowsEthernetTap(homePath, mac, mtu, metric, nwid, friendlyName, handler, arg));
 #endif	 // __WINDOWS__
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	return std::shared_ptr<EthernetTap>(new BSDEthernetTap(homePath, concurrency, pinning, mac, mtu, metric, nwid, friendlyName, handler, arg));
 #endif	 // __FreeBSD__
 
