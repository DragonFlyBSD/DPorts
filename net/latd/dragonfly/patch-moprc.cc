--- moprc.cc.orig
+++ moprc.cc
@@ -51,7 +51,7 @@
 #include "interfaces.h"
 #include "moprc.h"
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define ether_addr_octet octet
 #endif
 
