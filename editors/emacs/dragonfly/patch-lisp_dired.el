--- lisp/dired.el.orig	2025-06-05 17:26:35.151449000 +0200
+++ lisp/dired.el	2025-06-05 17:28:05.603349000 +0200
@@ -1737,6 +1737,8 @@ see `dired-use-ls-dired' for more detail
             ;; month names; but this should not be necessary any
             ;; more, with the new value of
             ;; `directory-listing-before-filename-regexp'.
+            ;; Cause it doesn't properly handle the lt_LT date format "2016-10-01"
+            (setq process-environment (cons "LC_TIME=C" process-environment))
             ((or file-list dir-wildcard)
 	     (let ((default-directory
 	            (or (car dir-wildcard) default-directory)))
