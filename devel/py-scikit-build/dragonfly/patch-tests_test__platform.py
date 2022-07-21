--- tests/test_platform.py.orig	2022-04-07 21:06:30 UTC
+++ tests/test_platform.py
@@ -84,7 +84,7 @@ def test_generator_cleanup():
     assert not os.path.exists(test_folder)
 
 
-@pytest.mark.parametrize("supported_platform", ["darwin", "freebsd", "openbsd", "linux", "windows", "os400"])
+@pytest.mark.parametrize("supported_platform", ["darwin", "freebsd", "openbsd", "linux", "windows", "os400", "dragonfly"])
 def test_known_platform(supported_platform, mocker):
     mocker.patch("platform.system", return_value=supported_platform)
     platforms = {
@@ -94,6 +94,7 @@ def test_known_platform(supported_platfo
         "darwin": "OSX",
         "windows": "Windows",
         "os400": "BSD",
+        "dragonfly": "BSD"
     }
     expected_platform_classname = "%sPlatform" % platforms[supported_platform]
     assert get_platform().__class__.__name__ == expected_platform_classname
