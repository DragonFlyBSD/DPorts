
$FreeBSD: ports/graphics/py-graph-core/files/patch-setup.py,v 1.6 2012/11/17 05:58:20 svnexp Exp $

--- setup.py.orig
+++ setup.py
@@ -3,12 +3,7 @@
 
 import os
 
-try:
-    from setuptools import setup, find_packages
-except ImportError as ie:
-    import ez_setup
-    ez_setup.use_setuptools()
-    from setuptools import setup, find_packages
+from setuptools import setup, find_packages
 
 # Startup
 appname = "python-graph-core"
