--- src/libcec/adapter/Pulse-Eight/USBCECAdapterDetection.cpp.orig	2020-05-17 01:14:14 UTC
+++ src/libcec/adapter/Pulse-Eight/USBCECAdapterDetection.cpp
@@ -63,7 +63,7 @@ static GUID USB_CDC_GUID = { 0x4D36E978,
 extern "C" {
 #include <libudev.h>
 }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/param.h>
 #include <sys/sysctl.h>
 #include <stdio.h>
@@ -138,7 +138,7 @@ bool FindComPort(std::string& strLocatio
 
 bool CUSBCECAdapterDetection::CanAutodetect(void)
 {
-#if defined(__APPLE__) || defined(HAVE_LIBUDEV) || defined(__WINDOWS__) || defined(__FreeBSD__) || defined(__linux__)
+#if defined(__APPLE__) || defined(HAVE_LIBUDEV) || defined(__WINDOWS__) || defined(__FreeBSD__) || defined(__linux__) || defined(__DragonFly__)
   return true;
 #else
   return false;
@@ -484,7 +484,7 @@ uint8_t CUSBCECAdapterDetection::FindAda
 {
   uint8_t iFound(0);
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   char devicePath[PATH_MAX + 1];
   char infos[512];
   char sysctlname[32];
