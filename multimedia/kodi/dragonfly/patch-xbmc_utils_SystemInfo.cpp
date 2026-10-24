--- xbmc/utils/SystemInfo.cpp.orig
+++ xbmc/utils/SystemInfo.cpp
@@ -64,7 +64,7 @@
 #elif defined(TARGET_ANDROID)
 #include <android/api-level.h>
 #include <sys/system_properties.h>
-#elif defined(TARGET_FREEBSD)
+#elif defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
 #include <sys/param.h>
 #elif defined(TARGET_LINUX)
 #include "platform/linux/SysfsPath.h"
@@ -680,6 +680,8 @@
   {
 #if defined(TARGET_WINDOWS)
     osName = GetKernelName() + "-based OS";
+#elif defined(TARGET_DRAGONFLY)
+    osName = "DragonFly";
 #elif defined(TARGET_FREEBSD)
     osName = GetKernelName(true); // FIXME: for FreeBSD OS name is a kernel name
 #elif defined(TARGET_DARWIN_IOS)
@@ -721,7 +723,7 @@
   if (!osVersion.empty())
     return osVersion;
 
-#if defined(TARGET_WINDOWS) || defined(TARGET_FREEBSD)
+#if defined(TARGET_WINDOWS) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
   osVersion = GetKernelVersion(); // FIXME: for Win32 and FreeBSD OS version is a kernel version
 #elif defined(TARGET_DARWIN)
   osVersion = CDarwinUtils::GetVersionString();
@@ -819,7 +821,7 @@
     osNameVer.append(" unknown");
 #elif defined(TARGET_WINDOWS_STORE)
   osNameVer = GetKernelName() + " " + GetOsVersion();
-#elif defined(TARGET_FREEBSD)
+#elif defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
   osNameVer = GetOsName() + " " + GetOsVersion();
 #elif defined(TARGET_DARWIN)
   osNameVer = StringUtils::Format("{} {} ({})", GetOsName(), GetOsVersion(),
@@ -1407,6 +1409,8 @@
   return "tvOS";
 #elif defined(TARGET_FREEBSD)
   return "FreeBSD";
+#elif defined(TARGET_DRAGONFLY)
+  return "DragonFly";
 #elif defined(TARGET_ANDROID)
   return "Android";
 #elif defined(TARGET_WEBOS)
@@ -1432,6 +1436,8 @@
   return XSTR_MACRO(__IPHONE_OS_VERSION_MIN_REQUIRED);
 #elif defined(TARGET_DARWIN_TVOS)
   return XSTR_MACRO(__TV_OS_VERSION_MIN_REQUIRED);
+#elif defined(TARGET_DRAGONFLY)
+  return XSTR_MACRO(__DragonFly_version);
 #elif defined(TARGET_FREEBSD)
   return XSTR_MACRO(__FreeBSD_version);
 #elif defined(TARGET_ANDROID)
