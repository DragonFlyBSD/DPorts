--- common/utils.hpp.orig	2021-05-15 11:16:03 UTC
+++ common/utils.hpp
@@ -334,7 +334,13 @@ static std::string getMacAddress(int soc
 #endif
 
 #ifdef FREEBSD
+# if defined(SIOCGIFMAC)
                 if (ioctl(sock, SIOCGIFMAC, &ifr) == 0)
+# elif defined(SIOCGHWADDR)
+                if (ioctl(sock, SIOCGHWADDR, &ifr) == 0)
+# else
+                if (0) /* XXX */
+# endif
 #else
                 if (ioctl(sock, SIOCGIFHWADDR, &ifr) == 0)
 #endif
