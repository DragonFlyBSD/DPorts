
$FreeBSD: ports/devel/cl-infix/files/patch-infix.asd,v 1.2 2012/11/17 05:55:37 svnexp Exp $

--- infix.asd.orig
+++ infix.asd
@@ -16,4 +16,4 @@
 	       (:static-file "COPYING")))
 
 (defmethod source-file-type ((f cl-source-file) (s (eql (find-system 'infix))))
-  "cl")
+  "lisp")
