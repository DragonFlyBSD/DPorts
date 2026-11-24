--- zeroconf/networkhotplugnotifier.cpp.orig
+++ zeroconf/networkhotplugnotifier.cpp
@@ -18,6 +18,15 @@
 
 #include "networkhotplugnotifier.h"
 
+#ifdef __DragonFly__
+// No netlink(4) here: report no network changes.
+NetworkHotplugNotifier::NetworkHotplugNotifier()
+  : p(nullptr)
+{}
+
+NetworkHotplugNotifier::~NetworkHotplugNotifier() {}
+#else
+
 #include "web/httpserver.h"
 
 #include <iostream>
@@ -227,3 +236,4 @@
 {
   delete p;
 }
+#endif // __DragonFly__
