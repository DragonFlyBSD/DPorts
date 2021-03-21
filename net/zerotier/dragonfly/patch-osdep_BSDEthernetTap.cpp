--- osdep/BSDEthernetTap.cpp.intermediate	2021-03-21 08:15:31.000000000 +0000
+++ osdep/BSDEthernetTap.cpp
@@ -337,7 +337,7 @@ void BSDEthernetTap::scanMulticastGroups
 {
 	std::vector<MulticastGroup> newGroups;
 
-#ifndef __OpenBSD__
+#if !defined(__OpenBSD__) && !defined(__DragonFly__)
 	struct ifmaddrs *ifmap = (struct ifmaddrs *)0;
 	if (!getifmaddrs(&ifmap)) {
 		struct ifmaddrs *p = ifmap;
