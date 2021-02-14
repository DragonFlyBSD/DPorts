--- xbmc/platform/freebsd/network/NetworkFreebsd.h.orig	2020-03-18 09:45:02 UTC
+++ xbmc/platform/freebsd/network/NetworkFreebsd.h
@@ -10,6 +10,10 @@
 
 #include "platform/posix/network/NetworkPosix.h"
 
+#ifdef TARGET_DRAGONFLY
+#define SA_SIZE(sa) RT_ROUNDUP((sa)->sa_len)
+#endif
+
 #include <string>
 #include <vector>
 
