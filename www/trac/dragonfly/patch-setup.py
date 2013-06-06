--- setup.py.orig	2013-01-15 22:53:57.000000000 +0000
+++ setup.py
@@ -93,11 +93,11 @@ facilities.
     zip_safe = True,
 
     setup_requires = [
-        'Genshi>=0.6,<0.7dev',
+        'Genshi>=0.6',
     ],
     install_requires = [
         'setuptools>=0.6b1',
-        'Genshi>=0.6,<0.7dev',
+        'Genshi>=0.6',
     ],
     extras_require = {
         'Babel': ['Babel>=0.9.5'],
