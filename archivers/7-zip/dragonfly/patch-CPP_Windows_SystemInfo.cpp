--- CPP/Windows/SystemInfo.cpp.intermediate	2022-01-25 22:07:59.000000000 +0000
+++ CPP/Windows/SystemInfo.cpp
@@ -14,6 +14,7 @@
 
 #include <unistd.h>
 #include <sys/utsname.h>
+#ifndef __DragonFly__
 #ifdef __APPLE__
 #include <sys/sysctl.h>
 #elif !defined(_AIX)
@@ -49,6 +50,7 @@ unsigned long getauxval(unsigned long ty
 #include <asm/hwcap.h>
 #endif
 #endif
+#endif
 
 #ifdef __linux__
 #include "../Windows/FileIO.h"
