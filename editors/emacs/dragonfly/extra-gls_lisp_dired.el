--- lisp/files.el.orig	2022-09-06 21:31:53 UTC
+++ lisp/files.el
@@ -7244,7 +7244,7 @@ need to be passed verbatim to shell comm
       pattern))))
 
 
-(defvar insert-directory-program (purecopy "ls")
+(defvar insert-directory-program (purecopy "gls")
   "Absolute or relative name of the `ls'-like program.
 This is used by `insert-directory' and `dired-insert-directory'
 \(thus, also by `dired').")
