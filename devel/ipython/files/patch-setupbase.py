
$FreeBSD: head/devel/ipython/files/patch-setupbase.py 354891 2014-05-22 21:05:22Z olgeni $

--- setupbase.py.orig
+++ setupbase.py
@@ -272,7 +272,7 @@
     Just man pages at this point.
     """
 
-    manpagebase = pjoin('share', 'man', 'man1')
+    manpagebase = pjoin('man', 'man1')
 
     # Simple file lists can be made by hand
     manpages = [f for f in glob(pjoin('docs','man','*.1.gz')) if isfile(f)]
