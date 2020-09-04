 DragonFly does not have /usr/share/zoneinfo/iso3166.tab
 but /usr/share/misc/iso3166 has identical format to iso3166.tab on linux.

--- xbmc/platform/posix/PosixTimezone.cpp.orig	2020-07-26 12:53:19 UTC
+++ xbmc/platform/posix/PosixTimezone.cpp
@@ -89,7 +89,10 @@ CPosixTimezone::CPosixTimezone()
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
