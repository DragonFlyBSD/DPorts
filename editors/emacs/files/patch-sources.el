
$FreeBSD: head/editors/emacs/files/patch-sources.el 301832 2012-08-01 15:20:25Z ashish $

--- /dev/null
+++ sources.el
@@ -0,0 +1,4 @@
+;;; Path to Emacs C Sources.
+(when (string-match (regexp-quote "%%EMACS_VER%%") emacs-version)
+  (setq find-function-C-source-directory
+        "%%DATADIR%%/%%EMACS_VER%%/src"))
