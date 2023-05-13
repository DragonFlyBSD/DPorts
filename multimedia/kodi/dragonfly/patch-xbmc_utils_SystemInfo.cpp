--- xbmc/utils/SystemInfo.cpp.orig	2023-03-11 22:16:38 UTC
+++ xbmc/utils/SystemInfo.cpp
@@ -65,7 +65,7 @@ using namespace winrt::Windows::System::
 #elif defined(TARGET_ANDROID)
 #include <android/api-level.h>
 #include <sys/system_properties.h>
-#elif defined(TARGET_FREEBSD)
+#elif defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
 #include <sys/param.h>
 #elif defined(TARGET_LINUX)
 #include "platform/linux/SysfsPath.h"
@@ -593,6 +593,8 @@ std::string CSysInfo::GetOsName(bool emp
   {
 #if defined (TARGET_WINDOWS)
     osName = GetKernelName() + "-based OS";
+#elif defined(TARGET_DRAGONFLY)
+    osName = "DragonFly";
 #elif defined(TARGET_FREEBSD)
     osName = GetKernelName(true); // FIXME: for FreeBSD OS name is a kernel name
 #elif defined(TARGET_DARWIN_IOS)
@@ -630,7 +632,7 @@ std::string CSysInfo::GetOsVersion(void)
   if (!osVersion.empty())
     return osVersion;
 
-#if defined(TARGET_WINDOWS) || defined(TARGET_FREEBSD)
+#if defined(TARGET_WINDOWS) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
   osVersion = GetKernelVersion(); // FIXME: for Win32 and FreeBSD OS version is a kernel version
 #elif defined(TARGET_DARWIN)
   osVersion = CDarwinUtils::GetVersionString();
@@ -730,7 +732,7 @@ std::string CSysInfo::GetOsPrettyNameWit
     osNameVer.append(" unknown");
 #elif defined(TARGET_WINDOWS_STORE)
   osNameVer = GetKernelName() + " " + GetOsVersion();
-#elif defined(TARGET_FREEBSD)
+#elif defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
   osNameVer = GetOsName() + " " + GetOsVersion();
 #elif defined(TARGET_DARWIN)
   osNameVer = StringUtils::Format("{} {} ({})", GetOsName(), GetOsVersion(),
@@ -1285,6 +1287,8 @@ std::string CSysInfo::GetBuildTargetPlat
   return "tvOS";
 #elif defined(TARGET_FREEBSD)
   return "FreeBSD";
+#elif defined(TARGET_DRAGONFLY)
+  return "DragonFly";
 #elif defined(TARGET_ANDROID)
   return "Android";
 #elif defined(TARGET_LINUX)
@@ -1308,6 +1312,8 @@ std::string CSysInfo::GetBuildTargetPlat
   return XSTR_MACRO(__IPHONE_OS_VERSION_MIN_REQUIRED);
 #elif defined(TARGET_DARWIN_TVOS)
   return XSTR_MACRO(__TV_OS_VERSION_MIN_REQUIRED);
+#elif defined(TARGET_DRAGONFLY)
+  return XSTR_MACRO(__DragonFly_version);
 #elif defined(TARGET_FREEBSD)
   return XSTR_MACRO(__FreeBSD_version);
 #elif defined(TARGET_ANDROID)
