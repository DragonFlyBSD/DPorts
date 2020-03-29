--- mDNSShared/PlatformCommon.c.intermediate	2020-03-29 18:58:36 UTC
+++ mDNSShared/PlatformCommon.c
@@ -335,7 +335,7 @@ mDNSexport mDNSBool mDNSPosixTCPSocketSe
     int sa_family = (addrType == mDNSAddrType_IPv4) ? AF_INET : AF_INET6;
     int err;
     int sock;
-#if !defined(TARGET_OS_FREEBSD)
+#if !defined(TARGET_OS_FREEBSD) && !defined(TARGET_OS_DRAGONFLY)
     mDNSu32 lowWater = 15384;
 #endif
 
@@ -400,7 +400,7 @@ mDNSexport mDNSBool mDNSPosixTCPSocketSe
     if (port)
         port->NotAnInteger = outTcpPort->NotAnInteger;
 
-#if !defined(TARGET_OS_FREEBSD)
+#if !defined(TARGET_OS_FREEBSD) && !defined(TARGET_OS_DRAGONFLY)
     err = setsockopt(sock, IPPROTO_TCP, TCP_NOTSENT_LOWAT, &lowWater, sizeof lowWater);
     if (err < 0)
     {
@@ -430,7 +430,7 @@ mDNSexport TCPSocket *mDNSPosixDoTCPList
     int failed;
     char *nbp;
     int i;
-#if !defined(TARGET_OS_FREEBSD)
+#if !defined(TARGET_OS_FREEBSD) && !defined(TARGET_OS_DRAGONFLY)
     mDNSu32 lowWater = 16384;
 #endif
     // When we remember our connection, we remember a name that we can print for logging.   But
@@ -454,7 +454,7 @@ mDNSexport TCPSocket *mDNSPosixDoTCPList
         goto out;
     }
 
-#if !defined(TARGET_OS_FREEBSD)
+#if !defined(TARGET_OS_FREEBSD) && !defined(TARGET_OS_DRAGONFLY)
     failed = setsockopt(remoteSock, IPPROTO_TCP, TCP_NOTSENT_LOWAT,
                         &lowWater, sizeof lowWater);
     if (failed < 0)
