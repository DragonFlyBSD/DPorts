--- xbmc/utils/SystemInfo.cpp.orig	2019-12-16 08:11:03 UTC
+++ xbmc/utils/SystemInfo.cpp
@@ -65,7 +65,7 @@ using namespace winrt::Windows::System::
 #elif defined(TARGET_ANDROID)
 #include <android/api-level.h>
 #include <sys/system_properties.h>
-#elif defined(TARGET_FREEBSD)
+#elif defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
 #include <sys/param.h>
 #elif defined(TARGET_LINUX)
 #include <linux/version.h>
@@ -555,6 +555,8 @@ std::string CSysInfo::GetOsName(bool emp
     osName = GetKernelName() + "-based OS";
 #elif defined(TARGET_FREEBSD)
     osName = GetKernelName(true); // FIXME: for FreeBSD OS name is a kernel name
+#elif defined(TARGET_DRAGONFLY)
+    osName = "DragonFly";
 #elif defined(TARGET_DARWIN_IOS)
     osName = "iOS";
 #elif defined(TARGET_DARWIN_OSX)
@@ -585,7 +587,7 @@ std::string CSysInfo::GetOsVersion(void)
   if (!osVersion.empty())
     return osVersion;
 
-#if defined(TARGET_WINDOWS) || defined(TARGET_FREEBSD)
+#if defined(TARGET_WINDOWS) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
   osVersion = GetKernelVersion(); // FIXME: for Win32 and FreeBSD OS version is a kernel version
 #elif defined(TARGET_DARWIN)
   osVersion = CDarwinUtils::GetVersionString();
@@ -677,7 +679,7 @@ std::string CSysInfo::GetOsPrettyNameWit
     osNameVer.append(" unknown");
 #elif defined(TARGET_WINDOWS_STORE)
   osNameVer = GetKernelName() + " " + GetOsVersion();
-#elif defined(TARGET_FREEBSD) || defined(TARGET_DARWIN)
+#elif defined(TARGET_FREEBSD) || defined(TARGET_DARWIN) || defined(TARGET_DRAGONFLY)
   osNameVer = GetOsName() + " " + GetOsVersion();
 #elif defined(TARGET_ANDROID)
   osNameVer = GetOsName() + " " + GetOsVersion() + " API level " +   StringUtils::Format("%d", CJNIBuild::SDK_INT);
@@ -1199,6 +1201,8 @@ std::string CSysInfo::GetBuildTargetPlat
   return "OS X";
 #elif defined(TARGET_DARWIN_IOS)
   return "iOS";
+#elif defined(TARGET_DRAGONFLY)
+  return "DragonFly";
 #elif defined(TARGET_FREEBSD)
   return "FreeBSD";
 #elif defined(TARGET_ANDROID)
@@ -1222,6 +1226,8 @@ std::string CSysInfo::GetBuildTargetPlat
   return XSTR_MACRO(__MAC_OS_X_VERSION_MIN_REQUIRED);
 #elif defined(TARGET_DARWIN_IOS)
   return XSTR_MACRO(__IPHONE_OS_VERSION_MIN_REQUIRED);
+#elif defined(TARGET_DRAGONFLY)
+  return XSTR_MACRO(__DragonFly_version);
 #elif defined(TARGET_FREEBSD)
   return XSTR_MACRO(__FreeBSD_version);
 #elif defined(TARGET_ANDROID)
@@ -1269,6 +1275,10 @@ std::string CSysInfo::GetBuildTargetPlat
     return StringUtils::Format("version %d.%d-STABLE", major, minor);
 
   return StringUtils::Format("version %d.%d-CURRENT", major, minor);
+#elif defined(TARGET_DRAGONFLY)
+  static const int major = (__DragonFly_version / 100000);
+  static const int minor = (__DragonFly_version - 100000 * major) / 100;
+  return StringUtils::Format("version %d.%d", major, minor);
 #elif defined(TARGET_ANDROID)
   return "API level " XSTR_MACRO(__ANDROID_API__);
 #elif defined(TARGET_LINUX)
