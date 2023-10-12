--- toolkit/xre/nsAppRunner.cpp.orig	2020-10-26 15:51:19 UTC
+++ toolkit/xre/nsAppRunner.cpp
@@ -5160,6 +5160,11 @@ bool BrowserTabsRemoteAutostart() {
     }
   }
 
+  // Disable MultiProcessing for DragonFly. Slowness and many crashes that require
+  // quite some debugging and investigation.
+  gBrowserTabsRemoteAutostart = false;
+  status = kE10sForceDisabled;
+
   gBrowserTabsRemoteStatus = status;
 
   return gBrowserTabsRemoteAutostart;
