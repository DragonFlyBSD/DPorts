--- osdep/BSDEthernetTap.cpp.orig	2023-09-14 19:09:26 UTC
+++ osdep/BSDEthernetTap.cpp
@@ -52,6 +52,10 @@
 #include "OSUtils.hpp"
 #include "BSDEthernetTap.hpp"
 
+#ifdef __DragonFly__ /* DragonFly doesn't support getifmaddrs(3). */
+#include "freebsd_getifmaddrs.h"
+#endif // __DragonFly__
+
 #define ZT_BASE32_CHARS "0123456789abcdefghijklmnopqrstuv"
 
 // ff:ff:ff:ff:ff:ff with no ADI
@@ -82,8 +86,8 @@ BSDEthernetTap::BSDEthernetTap(
 
 	Mutex::Lock _gl(globalTapCreateLock);
 
-#ifdef __FreeBSD__
-	/* FreeBSD allows long interface names and interface renaming */
+#if defined(__FreeBSD__) || defined(__DragonFly__)
+	/* FreeBSD and DragonFly BSD allows long interface names and interface renaming */
 
 	_dev = "zt";
 	_dev.push_back(ZT_BASE32_CHARS[(unsigned long)((nwid >> 60) & 0x1f)]);
