
$FreeBSD: head/devel/ipython/files/patch-setupbase.py 325353 2013-08-25 16:13:06Z olgeni $

--- setupbase.py.orig
+++ setupbase.py
@@ -208,7 +208,7 @@
     """
 
     docdirbase  = pjoin('share', 'doc', 'ipython')
-    manpagebase = pjoin('share', 'man', 'man1')
+    manpagebase = pjoin('man', 'man1')
 
     # Simple file lists can be made by hand
     manpages = [f for f in glob(pjoin('docs','man','*.1.gz')) if isfile(f)]
@@ -232,7 +232,6 @@
 
     # And assemble the entire output list
     data_files = [ (manpagebase, manpages),
-                   (pjoin(docdirbase, 'extensions'), igridhelpfiles),
                    ] + manual_files + example_files
 
     return data_files
