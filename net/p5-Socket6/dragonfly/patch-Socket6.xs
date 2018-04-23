--- Socket6.xs.orig	2016-04-11 03:27:34.000000000 +0000
+++ Socket6.xs
@@ -64,7 +64,7 @@ const struct in6_addr in6addr_loopback =
 # include <net/route.h>
 # if defined(__FreeBSD__) && __FreeBSD_version >= 700048
 #  include <netipsec/ipsec.h>
-# elif !defined(__OpenBSD__)
+# elif !defined(__OpenBSD__) && !defined(__DragonFly__)
 #  include <netinet6/ipsec.h>
 # endif
 #endif
