emacs is trying to get cute with its --dired addition to ls(1)
but fails to parse lt_LT dates having '-' as separators.

--- lisp/dired.el.orig	2015-04-02 10:23:06.000000000 +0300
+++ lisp/dired.el
@@ -1192,6 +1192,8 @@ see `dired-use-ls-dired' for more detail
     ;; We used to specify the C locale here, to force English month names;
     ;; but this should not be necessary any more,
     ;; with the new value of `directory-listing-before-filename-regexp'.
+    ;; Cause it doesn't properly handle the lt_LT date format "2016-10-01"
+    (setq process-environment (cons "LC_TIME=C" process-environment))
     (if file-list
 	(dolist (f file-list)
 	  (let ((beg (point)))
