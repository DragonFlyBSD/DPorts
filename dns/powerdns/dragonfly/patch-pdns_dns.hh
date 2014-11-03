--- pdns/dns.hh.orig	2014-09-08 09:52:08 UTC
+++ pdns/dns.hh
@@ -209,6 +209,8 @@ enum  {
 
 #if __FreeBSD__ || __APPLE__ || __OpenBSD__ ||  defined(__FreeBSD_kernel__)
 #include <machine/endian.h>
+#elif defined(__DragonFly__)
+#include <machine/endian.h>
 #elif __linux__ || __GNU__
 # include <endian.h>
 
