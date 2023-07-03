--- sklearn/utils/fixes.py.orig	2023-05-03 13:22:45.776863000 +0200
+++ sklearn/utils/fixes.py	2023-05-03 13:22:50.766943000 +0200
@@ -17,7 +17,7 @@
 import numpy as np
 import scipy
 import scipy.stats
-import threadpoolctl
+#import threadpoolctl
 
 from .deprecation import deprecated
 from ..externals._packaging.version import parse as parse_version
