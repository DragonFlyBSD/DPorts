
$FreeBSD: www/trac-math/files/patch-tracmath_tracmath.py 300897 2012-07-14 14:29:18Z beat $

--- tracmath/tracmath.py.orig
+++ tracmath/tracmath.py
@@ -4,8 +4,8 @@
 """
 
 import codecs
+import hashlib
 import re
-import sha
 from cStringIO import StringIO
 import os
 import sys
@@ -142,7 +142,7 @@
             if m:
                 label = m.group(1)
 
-        key = sha.new(content.encode('utf-8')).hexdigest()
+        key = hashlib.sha1(content.encode('utf-8')).hexdigest()
 
         imgname = key + '.png'
         imgpath = os.path.join(self.cacheDirectory, imgname)
