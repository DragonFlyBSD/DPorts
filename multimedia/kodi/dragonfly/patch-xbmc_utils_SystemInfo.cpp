--- xbmc/utils/SystemInfo.cpp.orig	2018-08-04 15:50:09.679349000 +0200
+++ xbmc/utils/SystemInfo.cpp	2018-08-04 15:58:13.369817000 +0200
@@ -73,6 +73,8 @@
 #include <sys/system_properties.h>
 #elif defined(TARGET_FREEBSD)
 #include <sys/param.h>
+#elif defined(TARGET_DRAGONFLY)
+#include <sys/param.h>
 #elif defined(TARGET_LINUX)
 #include <linux/version.h>
 #endif
@@ -615,7 +617,7 @@ std::string CSysInfo::GetOsName(bool emp
   {
 #if defined (TARGET_WINDOWS)
     osName = GetKernelName() + "-based OS";
-#elif defined(TARGET_FREEBSD)
+#elif defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
     osName = GetKernelName(true); // FIXME: for FreeBSD OS name is a kernel name
 #elif defined(TARGET_DARWIN_IOS)
     osName = "iOS";
@@ -647,7 +649,7 @@ std::string CSysInfo::GetOsVersion(void)
   if (!osVersion.empty())
     return osVersion;
 
-#if defined(TARGET_WINDOWS) || defined(TARGET_FREEBSD)
+#if defined(TARGET_WINDOWS) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
   osVersion = GetKernelVersion(); // FIXME: for Win32 and FreeBSD OS version is a kernel version
 #elif defined(TARGET_DARWIN_IOS)
   osVersion = CDarwinUtils::GetIOSVersionString();
@@ -744,7 +746,7 @@ std::string CSysInfo::GetOsPrettyNameWit
   }
   else
     osNameVer.append(" unknown");
-#elif defined(TARGET_FREEBSD) || defined(TARGET_DARWIN_IOS) || defined(TARGET_DARWIN_OSX)
+#elif defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY) || defined(TARGET_DARWIN_IOS) || defined(TARGET_DARWIN_OSX)
   osNameVer = GetOsName() + " " + GetOsVersion();
 #elif defined(TARGET_ANDROID)
   osNameVer = GetOsName() + " " + GetOsVersion() + " API level " +   StringUtils::Format("%d", CJNIBuild::SDK_INT);
@@ -1276,6 +1278,8 @@ std::string CSysInfo::GetBuildTargetPlat
   return "iOS";
 #elif defined(TARGET_FREEBSD)
   return "FreeBSD";
+#elif defined(TARGET_DRAGONFLY)
+  return "DragonFly";
 #elif defined(TARGET_ANDROID)
   return "Android";
 #elif defined(TARGET_LINUX)
@@ -1299,6 +1303,8 @@ std::string CSysInfo::GetBuildTargetPlat
   return XSTR_MACRO(__IPHONE_OS_VERSION_MIN_REQUIRED);
 #elif defined(TARGET_FREEBSD)
   return XSTR_MACRO(__FreeBSD_version);
+#elif defined(TARGET_DRAGONFLY)
+  return XSTR_MACRO(__DragonFly_version);
 #elif defined(TARGET_ANDROID)
   return "API level " XSTR_MACRO(__ANDROID_API__);
 #elif defined(TARGET_LINUX)
@@ -1345,6 +1351,10 @@ std::string CSysInfo::GetBuildTargetPlat
     return StringUtils::Format("version %d.%d-STABLE", major, minor);
 
   return StringUtils::Format("version %d.%d-CURRENT", major, minor);
+#elif defined(TARGET_DRAGONFLY)
+  static const int major = (__DragonFly_version / 100000);
+  static const int minor = (__DragonFly_version - 100000 * major) / 100;
+  return StringUtils::Format("version %d.%d", major, minor);
 #elif defined(TARGET_ANDROID)
   return "API level " XSTR_MACRO(__ANDROID_API__);
 #elif defined(TARGET_LINUX)
