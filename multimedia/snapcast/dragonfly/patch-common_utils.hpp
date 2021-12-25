--- common/utils.hpp.orig	2021-05-15 11:16:03 UTC
+++ common/utils.hpp
@@ -334,7 +334,11 @@ static std::string getMacAddress(int soc
 #endif
 
 #ifdef FREEBSD
+#ifdef __DragonFly__
+                if (0) /* XXX */
+#else
                 if (ioctl(sock, SIOCGIFMAC, &ifr) == 0)
+#endif
 #else
                 if (ioctl(sock, SIOCGIFHWADDR, &ifr) == 0)
 #endif
