--- setup.py.orig	2012-03-07 07:38:01.000000000 +0000
+++ setup.py
@@ -97,11 +97,11 @@ Japanese translated edition.
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
