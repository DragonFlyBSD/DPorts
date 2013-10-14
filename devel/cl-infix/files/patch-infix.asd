
$FreeBSD: devel/cl-infix/files/patch-infix.asd 300896 2012-07-14 13:54:48Z beat $

--- infix.asd.orig
+++ infix.asd
@@ -16,4 +16,4 @@
 	       (:static-file "COPYING")))
 
 (defmethod source-file-type ((f cl-source-file) (s (eql (find-system 'infix))))
-  "cl")
+  "lisp")
