--- external_imported/sole/sole.hpp.orig
+++ external_imported/sole/sole.hpp
@@ -140,7 +140,7 @@
 #   pragma comment(lib,"iphlpapi.lib")
 #   endif
 #   define $windows $yes
-#elif defined(__FreeBSD__) || defined(__NetBSD__) || \
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__) || \
         defined(__OpenBSD__) || defined(__MINT__) || defined(__bsdi__)
 #   include <ifaddrs.h>
 #   include <net/if_dl.h>
