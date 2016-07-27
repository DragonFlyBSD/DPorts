--- src/socket.cpp.orig	2010-11-01 02:33:55.000000000 +0200
+++ src/socket.cpp
@@ -1549,7 +1549,7 @@ Socket::Error UDPSocket::join(const IPV4
     int retval = setsockopt(so, IPPROTO_IP, IP_ADD_MEMBERSHIP, (char *)&group, sizeof(group));
     return errSuccess;
 
-#elif defined(IP_ADD_MEMBERSHIP) && defined(SIOCGIFINDEX) && !defined(__FreeBSD__) && !defined(__FreeBSD_kernel__) && !defined(_OSF_SOURCE) && !defined(__hpux) && !defined(__GNU__)
+#elif defined(IP_ADD_MEMBERSHIP) && defined(SIOCGIFINDEX) && !defined(__FreeBSD__) && !defined(__FreeBSD_kernel__) && !defined(_OSF_SOURCE) && !defined(__hpux) && !defined(__GNU__) && !defined(__DragonFly__)
 
         struct ip_mreqn      group;
     struct sockaddr_in   myaddr;
@@ -1589,7 +1589,7 @@ Socket::Error UDPSocket::join(const IPV4
 Socket::Error UDPSocket::getInterfaceIndex(const char *DeviceName,int& InterfaceIndex)
 {
 #ifndef WIN32
-#if defined(IP_ADD_MEMBERSHIP) && defined(SIOCGIFINDEX) && !defined(__FreeBSD__) && !defined(__FreeBSD_kernel__) && !defined(_OSF_SOURCE) && !defined(__hpux) && !defined(__GNU__)
+#if defined(IP_ADD_MEMBERSHIP) && defined(SIOCGIFINDEX) && !defined(__FreeBSD__) && !defined(__FreeBSD_kernel__) && !defined(_OSF_SOURCE) && !defined(__hpux) && !defined(__GNU__) && !defined(__DragonFly__)
 
     struct ip_mreqn  mreqn;
     struct ifreq       m_ifreq;
@@ -1608,7 +1608,7 @@ Socket::Error UDPSocket::getInterfaceInd
     if (ioctl (so, SIOCGIFINDEX, &m_ifreq))
         return error(errServiceUnavailable);
 
-#if defined(__FreeBSD__) || defined(__GNU__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__GNU__)
     InterfaceIndex = m_ifreq.ifr_ifru.ifru_index;
 #else
     InterfaceIndex = m_ifreq.ifr_ifindex;
