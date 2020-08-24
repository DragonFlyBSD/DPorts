--- xbmc/utils/SystemInfo.cpp.orig	2020-05-31 13:31:35 UTC
+++ xbmc/utils/SystemInfo.cpp
@@ -69,7 +69,7 @@ using namespace winrt::Windows::System::
 #elif defined(TARGET_ANDROID)
 #include <android/api-level.h>
 #include <sys/system_properties.h>
-#elif defined(TARGET_FREEBSD)
+#elif defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
 #include <sys/param.h>
 #elif defined(TARGET_LINUX)
 #include <linux/version.h>
@@ -604,6 +604,8 @@ std::string CSysInfo::GetOsName(bool emp
   {
 #if defined (TARGET_WINDOWS)
     osName = GetKernelName() + "-based OS";
+#elif defined(TARGET_DRAGONFLY)
+    osName = "DragonFly";
 #elif defined(TARGET_FREEBSD)
     osName = GetKernelName(true); // FIXME: for FreeBSD OS name is a kernel name
 #elif defined(TARGET_DARWIN_IOS)
@@ -636,7 +638,7 @@ std::string CSysInfo::GetOsVersion(void)
   if (!osVersion.empty())
     return osVersion;
 
-#if defined(TARGET_WINDOWS) || defined(TARGET_FREEBSD)
+#if defined(TARGET_WINDOWS) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
   osVersion = GetKernelVersion(); // FIXME: for Win32 and FreeBSD OS version is a kernel version
 #elif defined(TARGET_DARWIN_IOS)
   osVersion = CDarwinUtils::GetIOSVersionString();
@@ -730,7 +732,7 @@ std::string CSysInfo::GetOsPrettyNameWit
     osNameVer.append(" unknown");
 #elif defined(TARGET_WINDOWS_STORE)
   osNameVer = GetKernelName() + " " + GetOsVersion();
-#elif defined(TARGET_FREEBSD) || defined(TARGET_DARWIN_IOS) || defined(TARGET_DARWIN_OSX)
+#elif defined(TARGET_FREEBSD) || defined(TARGET_DARWIN_IOS) || defined(TARGET_DARWIN_OSX) || defined(TARGET_DRAGONFLY)
   osNameVer = GetOsName() + " " + GetOsVersion();
 #elif defined(TARGET_ANDROID)
   osNameVer = GetOsName() + " " + GetOsVersion() + " API level " +   StringUtils::Format("%d", CJNIBuild::SDK_INT);
@@ -1261,6 +1263,8 @@ std::string CSysInfo::GetBuildTargetPlat
   return "OS X";
 #elif defined(TARGET_DARWIN_IOS)
   return "iOS";
+#elif defined(TARGET_DRAGONFLY)
+  return "DragonFly";
 #elif defined(TARGET_FREEBSD)
   return "FreeBSD";
 #elif defined(TARGET_ANDROID)
@@ -1284,6 +1288,8 @@ std::string CSysInfo::GetBuildTargetPlat
   return XSTR_MACRO(__MAC_OS_X_VERSION_MIN_REQUIRED);
 #elif defined(TARGET_DARWIN_IOS)
   return XSTR_MACRO(__IPHONE_OS_VERSION_MIN_REQUIRED);
+#elif defined(TARGET_DRAGONFLY)
+  return XSTR_MACRO(__DragonFly_version);
 #elif defined(TARGET_FREEBSD)
   return XSTR_MACRO(__FreeBSD_version);
 #elif defined(TARGET_ANDROID)
@@ -1320,6 +1326,10 @@ std::string CSysInfo::GetBuildTargetPlat
 #elif defined(TARGET_DARWIN_IOS)
   return StringUtils::Format("version %d.%d.%d", (__IPHONE_OS_VERSION_MIN_REQUIRED / 10000) % 100,
                              (__IPHONE_OS_VERSION_MIN_REQUIRED / 100) % 100, __IPHONE_OS_VERSION_MIN_REQUIRED % 100);
+#elif defined(TARGET_DRAGONFLY)
+  static const int major = (__DragonFly_version / 100000);
+  static const int minor = (__DragonFly_version - 100000 * major) / 100;
+  return StringUtils::Format("version %d.%d", major, minor);
 #elif defined(TARGET_FREEBSD)
   // FIXME: should works well starting from FreeBSD 8.1
   static const int major = (__FreeBSD_version / 100000) % 100;
