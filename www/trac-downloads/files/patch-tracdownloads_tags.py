
$FreeBSD: ports/www/trac-downloads/files/patch-tracdownloads_tags.py,v 1.1 2012/10/30 19:44:54 rm Exp $

--- tracdownloads/tags.py.orig
+++ tracdownloads/tags.py
@@ -1,11 +1,5 @@
 # -*- coding: utf-8 -*-
 
-# Deprecated as for Python 2.6.
-try:
-    import sets
-except:
-    pass
-
 # Trac imports.
 from trac.core import *
 from trac.resource import Resource
