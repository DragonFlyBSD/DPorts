--- tests/test_platform.py.orig	2022-05-18 17:52:53 UTC
+++ tests/test_platform.py
@@ -84,7 +84,7 @@ def test_generator_cleanup():
     assert not os.path.exists(test_folder)
 
 
-@pytest.mark.parametrize("supported_platform", ["darwin", "freebsd", "openbsd", "linux", "windows", "os400", "cygwin"])
+@pytest.mark.parametrize("supported_platform", ["darwin", "freebsd", "openbsd", "linux", "windows", "os400", "cygwin", "dragonfly"])
 def test_known_platform(supported_platform, mocker):
     mocker.patch("platform.system", return_value=supported_platform)
     platforms = {
@@ -95,6 +95,7 @@ def test_known_platform(supported_platfo
         "windows": "Windows",
         "os400": "BSD",
         "cygwin": "Cygwin",
+        "dragonfly": "BSD"
     }
     expected_platform_classname = "%sPlatform" % platforms[supported_platform]
     assert get_platform().__class__.__name__ == expected_platform_classname
