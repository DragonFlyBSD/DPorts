--- xbmc/linux/LinuxTimezone.cpp.orig	2017-11-14 17:55:01.000000000 +0100
+++ xbmc/linux/LinuxTimezone.cpp	2018-08-05 14:44:27.317751000 +0200
@@ -32,6 +32,9 @@
 #ifdef TARGET_FREEBSD
 #include "freebsd/FreeBSDGNUReplacements.h"
 #endif
+#ifdef TARGET_DRAGONFLY
+#include "dragonfly/DragonFlyGNUReplacements.h"
+#endif
 
 #include "Util.h"
 #include "utils/StringUtils.h"
@@ -105,7 +108,9 @@ CLinuxTimezone::CLinuxTimezone() : m_IsD
    if (!fp)
    {
       fp = fopen("/usr/share/misc/iso3166", "r");
+#if !defined(TARGET_DRAGONFLY)
       nameonfourthfield = 1;
+#endif
    }
    if (fp)
    {
