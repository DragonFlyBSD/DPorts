diff --git net/dns/address_info.cc net/dns/address_info.cc
index c0e2a073140..5a21830b1b6 100644
--- src/3rdparty/chromium/net/dns/address_info.cc
+++ src/3rdparty/chromium/net/dns/address_info.cc
@@ -77,7 +77,7 @@ AddressInfo::AddressInfoAndResult AddressInfo::Get(
     // error.
     // http://crbug.com/134142
     err = ERR_NAME_NOT_RESOLVED;
-#elif BUILDFLAG(IS_POSIX) && !BUILDFLAG(IS_FREEBSD)
+#elif BUILDFLAG(IS_POSIX) && !BUILDFLAG(IS_FREEBSD) && !defined(IS_DRAGONFLY)
     if (os_error != EAI_NONAME && os_error != EAI_NODATA)
       err = ERR_NAME_RESOLUTION_FAILED;
 #endif
