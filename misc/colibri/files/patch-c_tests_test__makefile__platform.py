-- (1) use gmake instead of make
-- (2) do not expect -static as a workaround for https://bugs.freebsd.org/bugzilla/show_bug.cgi?id=296794

--- c/tests/test_makefile_platform.py.orig	2026-07-14 21:41:21 UTC
+++ c/tests/test_makefile_platform.py
@@ -6,7 +6,7 @@ C_DIR = Path(__file__).resolve().parents[1]
 
 
 C_DIR = Path(__file__).resolve().parents[1]
-MAKE = shutil.which("make")
+MAKE = shutil.which("gmake")
 
 
 @unittest.skipUnless(MAKE, "make is required")
@@ -27,7 +27,7 @@ class MakefilePlatformTests(unittest.TestCase):
 
         self.assertIn("-o glm.exe", result.stdout)
         self.assertIn("-fopenmp", result.stdout)
-        self.assertIn("-static", result.stdout)
+        #self.assertIn("-static", result.stdout)
 
 
 if __name__ == "__main__":
