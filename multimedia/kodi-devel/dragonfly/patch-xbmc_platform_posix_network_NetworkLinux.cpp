--- xbmc/platform/posix/network/NetworkLinux.cpp.orig	2019-12-16 08:11:03 UTC
+++ xbmc/platform/posix/network/NetworkLinux.cpp
@@ -51,6 +51,10 @@
 #include "utils/log.h"
 #include "utils/StringUtils.h"
 
+#ifdef TARGET_DRAGONFLY
+#define	SA_SIZE(sa) RT_ROUNDUP((sa)->sa_len)
+#endif
+
 CNetworkInterfaceLinux::CNetworkInterfaceLinux(CNetworkLinux* network, std::string interfaceName, char interfaceMacAddrRaw[6]):
   m_interfaceName(interfaceName),
   m_interfaceMacAdr(StringUtils::Format("%02X:%02X:%02X:%02X:%02X:%02X",
