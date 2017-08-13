--- libs/libmythbase/mythcdrom.cpp.orig	2015-06-16 19:03:30.000000000 +0300
+++ libs/libmythbase/mythcdrom.cpp
@@ -5,7 +5,7 @@
 #include "mythconfig.h"
 #ifdef linux
 #include "mythcdrom-linux.h"
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include "mythcdrom-freebsd.h"
 #elif CONFIG_DARWIN
 #include "mythcdrom-darwin.h"
@@ -33,7 +33,7 @@ MythCDROM* MythCDROM::get(QObject* par,
 {
 #ifdef linux
     return GetMythCDROMLinux(par, devicePath, SuperMount, AllowEject);
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     return GetMythCDROMFreeBSD(par, devicePath, SuperMount, AllowEject);
 #elif CONFIG_DARWIN
     return GetMythCDROMDarwin(par, devicePath, SuperMount, AllowEject);
