--- lisp/files.el.orig	2015-04-02 10:23:06.000000000 +0300
+++ lisp/files.el
@@ -6094,7 +6094,7 @@ need to be passed verbatim to shell comm
       pattern))))
 
 
-(defvar insert-directory-program (purecopy "ls")
+(defvar insert-directory-program (purecopy "gls")
   "Absolute or relative name of the `ls' program used by `insert-directory'.")
 
 (defcustom directory-free-space-program (purecopy "df")
