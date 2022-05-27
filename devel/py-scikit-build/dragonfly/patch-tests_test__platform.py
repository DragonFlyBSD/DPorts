--- tests/test_platform.py.orig	2022-02-07 18:51:43 UTC
+++ tests/test_platform.py
@@ -84,7 +84,7 @@ def test_generator_cleanup():
 
 
 @pytest.mark.parametrize("supported_platform",
-                         ['darwin', 'freebsd', 'openbsd', 'linux', 'windows', 'os400'])
+                         ['darwin', 'freebsd', 'openbsd', 'linux', 'windows', 'os400', 'dragonfly'])
 def test_known_platform(supported_platform, mocker):
     mocker.patch('platform.system', return_value=supported_platform)
     platforms = {
@@ -93,7 +93,8 @@ def test_known_platform(supported_platfo
         'linux': 'Linux',
         'darwin': 'OSX',
         'windows': 'Windows',
-        'os400': 'BSD'
+        'os400': 'BSD',
+        'dragonfly': 'BSD'
     }
     expected_platform_classname = "%sPlatform" % platforms[supported_platform]
     assert get_platform().__class__.__name__ == expected_platform_classname
