diff --git chrome/browser/ui/safety_hub/disruptive_notification_permissions_manager.h chrome/browser/ui/safety_hub/disruptive_notification_permissions_manager.h
index 00fe24ccb73e..94f7fd84d5d7 100644
--- chrome/browser/ui/safety_hub/disruptive_notification_permissions_manager.h
+++ chrome/browser/ui/safety_hub/disruptive_notification_permissions_manager.h
@@ -5,6 +5,7 @@
 #ifndef CHROME_BROWSER_UI_SAFETY_HUB_DISRUPTIVE_NOTIFICATION_PERMISSIONS_MANAGER_H_
 #define CHROME_BROWSER_UI_SAFETY_HUB_DISRUPTIVE_NOTIFICATION_PERMISSIONS_MANAGER_H_
 
+#include <set>
 #include <memory>
 
 #include "base/scoped_observation.h"
