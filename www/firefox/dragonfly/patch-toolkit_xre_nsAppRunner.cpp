--- toolkit/xre/nsAppRunner.cpp.orig	2020-03-09 13:10:19 UTC
+++ toolkit/xre/nsAppRunner.cpp
@@ -4941,11 +4941,10 @@ bool BrowserTabsRemoteAutostart() {
     gBrowserTabsRemoteAutostart = true;
   }
 
-  // Uber override pref for emergency blocking
-  if (gBrowserTabsRemoteAutostart && EnvHasValue("MOZ_FORCE_DISABLE_E10S")) {
-    gBrowserTabsRemoteAutostart = false;
-    status = kE10sForceDisabled;
-  }
+  // Disable MultiProcessing for DragonFly. Slowness and many crashes that require
+  // quite some debugging and investigation.
+  gBrowserTabsRemoteAutostart = false;
+  status = kE10sForceDisabled;
 
   gBrowserTabsRemoteStatus = status;
 
