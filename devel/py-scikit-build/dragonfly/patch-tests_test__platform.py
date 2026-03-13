--- tests/test_platform.py.orig	Sun Feb  2 00:00:00 2020
+++ tests/test_platform.py	Sun Nov
@@ -83,7 +83,7 @@ def test_generator_cleanup():
 
 
 @pytest.mark.parametrize(
-    "supported_platform", ["darwin", "freebsd", "openbsd", "linux", "windows", "os400", "cygwin", "sunos", "aix"]
+    "supported_platform", ["darwin", "freebsd", "openbsd", "linux", "windows", "os400", "cygwin", "sunos", "aix", "dragonfly"]
 )
 def test_known_platform(supported_platform, mocker):
     mocker.patch("platform.system", return_value=supported_platform)
@@ -97,6 +97,7 @@ def test_known_platform(supported_platform, mocker):
         "cygwin": "Cygwin",
         "sunos": "SunOS",
         "aix": "AIX",
+        "dragonfly": "BSD"
     }
     expected_platform_classname = f"{platforms[supported_platform]}Platform"
     assert get_platform().__class__.__name__ == expected_platform_classname
