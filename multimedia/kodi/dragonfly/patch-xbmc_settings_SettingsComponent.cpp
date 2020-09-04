 DragonFly does not have /usr/share/zoneinfo/iso3166.tab
 but /usr/share/misc/iso3166 has identical format to iso3166.tab on linux.

--- xbmc/platform/linux/LinuxTimezone.cpp.orig	2020-05-31 13:31:35 UTC
+++ xbmc/platform/linux/LinuxTimezone.cpp
@@ -88,7 +88,10 @@ CLinuxTimezone::CLinuxTimezone()
    if (!fp)
    {
       fp = fopen("/usr/share/misc/iso3166", "r");
+#ifndef __DragonFly__
+/* identical to iso3166.tab */
       nameonfourthfield = 1;
+#endif
    }
    if (fp)
    {
