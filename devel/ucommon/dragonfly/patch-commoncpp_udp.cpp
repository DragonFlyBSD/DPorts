--- commoncpp/udp.cpp.orig
+++ commoncpp/udp.cpp
@@ -336,7 +336,7 @@
     if (ioctl (so, SIOCGIFINDEX, &m_ifreq))
         return error(errServiceUnavailable);
 
-#if defined(__FreeBSD__) || defined(__GNU__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__GNU__)
     InterfaceIndex = m_ifreq.ifr_ifru.ifru_index;
 #else
     InterfaceIndex = m_ifreq.ifr_ifindex;
