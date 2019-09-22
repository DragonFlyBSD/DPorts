--- osdep/BSDEthernetTap.cpp.orig	2019-09-22 13:59:30 UTC
+++ osdep/BSDEthernetTap.cpp
@@ -65,6 +65,10 @@
 #include "OSUtils.hpp"
 #include "BSDEthernetTap.hpp"
 
+#ifdef __DragonFly__
+#include "freebsd_getifmaddrs.h"
+#endif // __DragonFly__
+
 #define ZT_BASE32_CHARS "0123456789abcdefghijklmnopqrstuv"
 
 // ff:ff:ff:ff:ff:ff with no ADI
@@ -94,7 +98,7 @@ BSDEthernetTap::BSDEthernetTap(
 
 	Mutex::Lock _gl(globalTapCreateLock);
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	/* FreeBSD allows long interface names and interface renaming */
 
 	_dev = "zt";
@@ -176,7 +180,10 @@ BSDEthernetTap::BSDEthernetTap(
 	OSUtils::ztsnprintf(metstr,sizeof(metstr),"%u",_metric);
 	long cpid = (long)vfork();
 	if (cpid == 0) {
-		::execl("/sbin/ifconfig","/sbin/ifconfig",_dev.c_str(),"lladdr",ethaddr,"mtu",mtustr,"metric",metstr,"up",(const char *)0);
+		::execl("/sbin/ifconfig","/sbin/ifconfig",_dev.c_str(),"lladdr",ethaddr,"metric",metstr,"up",(const char *)0);
+#ifndef __DragonFly__
+		::execl("/sbin/ifconfig","/sbin/ifconfig",_dev.c_str(),"mtu",mtustr,(const char *)0);
+#endif // __DragonFly__
 		::_exit(-1);
 	} else if (cpid > 0) {
 		int exitcode = -1;
