diff --git components/policy/tools/generate_policy_source.py components/policy/tools/generate_policy_source.py
index 6c99e7133380..9160d7684d10 100755
--- components/policy/tools/generate_policy_source.py
+++ components/policy/tools/generate_policy_source.py
@@ -38,9 +38,9 @@ PLATFORM_STRINGS = {
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
 
@@ -137,7 +137,6 @@ class PolicyDetails:
         ['chrome_os']):
       raise RuntimeError('device_only is only allowed for Chrome OS: "%s"' %
                          self.name)
-
     self.is_supported = (target_platform in self.platforms
                          or target_platform in self.future_on)
     self.is_future = target_platform in self.future_on
