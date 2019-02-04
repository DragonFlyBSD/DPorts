--- xbmc/network/linux/NetworkLinux.cpp.orig	2017-11-14 17:55:01.000000000 +0100
+++ xbmc/network/linux/NetworkLinux.cpp	2018-08-04 19:20:07.402075000 +0200
@@ -48,7 +48,7 @@
   #include "network/osx/ioshacks.h"
 #endif
   #include <ifaddrs.h>
-#elif defined(TARGET_FREEBSD)
+#elif defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
   #include <sys/sockio.h>
   #include <sys/wait.h>
   #include <net/if.h>
@@ -67,6 +67,10 @@
 #include "utils/log.h"
 #include "utils/StringUtils.h"
 
+#ifdef TARGET_DRAGONFLY
+#define	SA_SIZE(sa)	RT_ROUNDUP((sa)->sa_len)
+#endif
+
 CNetworkInterfaceLinux::CNetworkInterfaceLinux(CNetworkLinux* network, std::string interfaceName, char interfaceMacAddrRaw[6]):
   m_interfaceName(interfaceName),
   m_interfaceMacAdr(StringUtils::Format("%02X:%02X:%02X:%02X:%02X:%02X",
@@ -92,7 +96,7 @@ std::string& CNetworkInterfaceLinux::Get
 
 bool CNetworkInterfaceLinux::IsWireless()
 {
-#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD)
+#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
   return false;
 #else
   struct iwreq wrq;
@@ -216,7 +220,7 @@ std::string CNetworkInterfaceLinux::GetC
   }
   if (result.empty())
     CLog::Log(LOGWARNING, "Unable to determine gateway");
-#elif defined(TARGET_FREEBSD)
+#elif defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
    size_t needed;
    int mib[6];
    char *buf, *next, *lim;
@@ -358,7 +362,7 @@ CNetworkInterface* CNetworkLinux::GetFir
 void CNetworkLinux::GetMacAddress(const std::string& interfaceName, char rawMac[6])
 {
   memset(rawMac, 0, 6);
-#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD)
+#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
 
 #if !defined(IFT_ETHER)
 #define IFT_ETHER 0x6/* Ethernet CSMACD */
@@ -410,7 +414,7 @@ void CNetworkLinux::queryInterfaceList()
   char macAddrRaw[6];
   m_interfaces.clear();
 
-#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD)
+#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
 
    // Query the list of interfaces.
    struct ifaddrs *list;
@@ -546,7 +550,7 @@ bool CNetworkLinux::PingHost(unsigned lo
 
 #if defined (TARGET_DARWIN_IOS) // no timeout option available
   sprintf(cmd_line, "ping -c 1 %s", inet_ntoa(host_ip));
-#elif defined (TARGET_DARWIN) || defined (TARGET_FREEBSD)
+#elif defined (TARGET_DARWIN) || defined (TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
   sprintf(cmd_line, "ping -c 1 -t %d %s", timeout_ms / 1000 + (timeout_ms % 1000) != 0, inet_ntoa(host_ip));
 #else
   sprintf(cmd_line, "ping -c 1 -w %d %s", timeout_ms / 1000 + (timeout_ms % 1000) != 0, inet_ntoa(host_ip));
@@ -567,7 +571,7 @@ bool CNetworkLinux::PingHost(unsigned lo
   return result == 0;
 }
 
-#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD)
+#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
 bool CNetworkInterfaceLinux::GetHostMacAddress(unsigned long host_ip, std::string& mac)
 {
   bool ret = false;
