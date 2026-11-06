--- src/code/x86-64-vm.lisp.orig	2026-09-26 13:30:06 UTC
+++ src/code/x86-64-vm.lisp
@@ -18,7 +18,7 @@
   (let ((sp (context-register context sb-vm::rsp-offset)))
     (sap-ref-word (int-sap sp) return-pc-save-offset)))
 
-#+(or darwin linux openbsd win32 sunos (and freebsd x86-64))
+#+(or darwin linux openbsd win32 sunos dragonfly (and freebsd x86-64))
 (define-alien-routine ("os_context_float_register_addr" context-float-register-addr)
   (* unsigned) (context (* os-context-t)) (index int))
 
@@ -35,11 +35,11 @@
 
 (defun context-float-register (context index format &optional integer)
   (declare (ignorable context index integer))
-  #-(or darwin linux openbsd win32 sunos (and freebsd x86-64))
+  #-(or darwin linux openbsd win32 sunos dragonfly (and freebsd x86-64))
   (progn
     (warn "stub CONTEXT-FLOAT-REGISTER")
     (coerce 0 format))
-  #+(or darwin linux openbsd win32 sunos (and freebsd x86-64))
+  #+(or darwin linux openbsd win32 sunos dragonfly (and freebsd x86-64))
   (let ((sap (alien-sap (context-float-register-addr context index))))
     (ecase format
       (single-float
