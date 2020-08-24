--- xbmc/platform/linux/network/NetworkLinux.cpp.orig	2020-05-31 13:31:35 UTC
+++ xbmc/platform/linux/network/NetworkLinux.cpp
@@ -36,7 +36,7 @@
   #include "platform/darwin/osx/network/ioshacks.h"
 #endif
   #include <ifaddrs.h>
-#elif defined(TARGET_FREEBSD)
+#elif defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
   #include <sys/sockio.h>
   #include <sys/wait.h>
   #include <net/if.h>
@@ -54,6 +54,10 @@
 #include "utils/log.h"
 #include "utils/StringUtils.h"
 
+#if defined(TARGET_DRAGONFLY) && !defined(SA_SIZE)
+#define SA_SIZE(sa) RT_ROUNDUP((sa)->sa_len)
+#endif
+
 CNetworkInterfaceLinux::CNetworkInterfaceLinux(CNetworkLinux* network, std::string interfaceName, char interfaceMacAddrRaw[6]):
   m_interfaceName(interfaceName),
   m_interfaceMacAdr(StringUtils::Format("%02X:%02X:%02X:%02X:%02X:%02X",
@@ -77,7 +81,7 @@ const std::string& CNetworkInterfaceLinu
 
 bool CNetworkInterfaceLinux::IsWireless() const
 {
-#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD)
+#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGER_DRAGONFLY)
   return false;
 #else
   struct iwreq wrq;
@@ -201,7 +205,7 @@ std::string CNetworkInterfaceLinux::GetC
   }
   if (result.empty())
     CLog::Log(LOGWARNING, "Unable to determine gateway");
-#elif defined(TARGET_FREEBSD)
+#elif defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
    size_t needed;
    int mib[6];
    char *buf, *next, *lim;
@@ -344,7 +348,7 @@ CNetworkInterface* CNetworkLinux::GetFir
 void CNetworkLinux::GetMacAddress(const std::string& interfaceName, char rawMac[6])
 {
   memset(rawMac, 0, 6);
-#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD)
+#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
 
 #if !defined(IFT_ETHER)
 #define IFT_ETHER 0x6/* Ethernet CSMACD */
@@ -396,7 +400,7 @@ void CNetworkLinux::queryInterfaceList()
   char macAddrRaw[6];
   m_interfaces.clear();
 
-#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD)
+#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
 
    // Query the list of interfaces.
    struct ifaddrs *list;
@@ -536,7 +540,7 @@ bool CNetworkLinux::PingHost(unsigned lo
   struct in_addr host_ip;
   host_ip.s_addr = remote_ip;
 
-#if defined (TARGET_DARWIN) || defined (TARGET_FREEBSD)
+#if defined (TARGET_DARWIN) || defined (TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
   sprintf(cmd_line, "ping -c 1 -t %d %s", timeout_ms / 1000 + (timeout_ms % 1000) != 0, inet_ntoa(host_ip));
 #else
   sprintf(cmd_line, "ping -c 1 -w %d %s", timeout_ms / 1000 + (timeout_ms % 1000) != 0, inet_ntoa(host_ip));
@@ -559,7 +563,7 @@ bool CNetworkLinux::PingHost(unsigned lo
   return result == 0;
 }
 
-#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD)
+#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
 bool CNetworkInterfaceLinux::GetHostMacAddress(unsigned long host_ip, std::string& mac) const
 {
   bool ret = false;
