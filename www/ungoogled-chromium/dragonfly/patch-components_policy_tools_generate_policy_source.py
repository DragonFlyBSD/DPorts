diff --git components/policy/tools/generate_policy_source.py components/policy/tools/generate_policy_source.py
index 7f2e7b957d6..50b57094af7 100755
--- components/policy/tools/generate_policy_source.py
+++ components/policy/tools/generate_policy_source.py
@@ -37,9 +37,9 @@ PLATFORM_STRINGS = {
     'ios': ['ios'],
     'fuchsia': ['fuchsia'],
     'chrome.win': ['win'],
-    'chrome.linux': ['linux', 'openbsd', 'freebsd'],
+    'chrome.linux': ['linux', 'openbsd', 'freebsd', 'dragonfly'],
     'chrome.mac': ['mac'],
-    'chrome.*': ['win', 'mac', 'linux', 'openbsd', 'freebsd'],
+    'chrome.*': ['win', 'mac', 'linux', 'openbsd', 'freebsd', 'dragonfly'],
     'chrome.win7': ['win'],
 }
 
@@ -139,7 +139,6 @@ class PolicyDetails:
         ['chrome_os']):
       raise RuntimeError('device_only is only allowed for Chrome OS: "%s"' %
                          self.name)
-
     self.is_supported = (target_platform in self.platforms
                          or target_platform in self.future_on)
     self.is_future = target_platform in self.future_on
