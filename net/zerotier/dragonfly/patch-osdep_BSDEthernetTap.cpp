--- osdep/BSDEthernetTap.cpp.orig	2019-08-13 04:25:12.000000000 +0800
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
@@ -94,8 +98,8 @@
 
 	Mutex::Lock _gl(globalTapCreateLock);
 
-#ifdef __FreeBSD__
-	/* FreeBSD allows long interface names and interface renaming */
+#if defined(__FreeBSD__) || defined(__DragonFly__)
+	/* FreeBSD and DragonFly allow long interface names and interface renaming */
 
 	_dev = "zt";
 	_dev.push_back(ZT_BASE32_CHARS[(unsigned long)((nwid >> 60) & 0x1f)]);
@@ -176,7 +180,12 @@
 	OSUtils::ztsnprintf(metstr,sizeof(metstr),"%u",_metric);
 	long cpid = (long)vfork();
 	if (cpid == 0) {
+#if defined(__DragonFly__) && (__DragonFly_version < 500708)
+		// DragonFly's tap(4) doesn't allow to set MTU > 1500 until revision 500708
+		::execl("/sbin/ifconfig","/sbin/ifconfig",_dev.c_str(),"lladdr",ethaddr,"metric",metstr,"up",(const char *)0);
+#else
 		::execl("/sbin/ifconfig","/sbin/ifconfig",_dev.c_str(),"lladdr",ethaddr,"mtu",mtustr,"metric",metstr,"up",(const char *)0);
+#endif
 		::_exit(-1);
 	} else if (cpid > 0) {
 		int exitcode = -1;
