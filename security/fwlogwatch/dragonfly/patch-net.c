--- net.c.intermediate	2016-07-15 14:55:24 UTC
+++ net.c
@@ -24,10 +24,12 @@
 #ifndef __OpenBSD__
 #ifndef __FreeBSD__
 #ifndef __NetBSD__
+#ifndef __DragonFly__
 #include <crypt.h>
 #endif
 #endif
 #endif
+#endif
 #endif
 
 #ifndef INT_MAX
