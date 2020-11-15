--- tests/test_platform.py.orig	2020-05-07 08:30:32 UTC
+++ tests/test_platform.py
@@ -84,10 +84,11 @@ def test_generator_cleanup():
 
 
 @pytest.mark.parametrize("supported_platform",
-                         ['darwin', 'freebsd', 'linux', 'windows', 'os400'])
+                         ['darwin', 'dragonfly', 'freebsd', 'linux', 'windows', 'os400'])
 def test_known_platform(supported_platform, mocker):
     mocker.patch('platform.system', return_value=supported_platform)
     platforms = {
+        'dragonfly': 'BSD',
         'freebsd': 'BSD',
         'linux': 'Linux',
         'darwin': 'OSX',
