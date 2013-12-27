--- src/org/armedbear/lisp/asdf.lisp.orig	2013-06-22 11:00:13.000000000 +0000
+++ src/org/armedbear/lisp/asdf.lisp
@@ -1598,7 +1598,7 @@ then returning the non-empty string valu
      '(:cygwin (:win :windows :mswindows :win32 :mingw32) ;; try cygwin first!
        (:linux :linux :linux-target) ;; for GCL at least, must appear before :bsd
        (:macosx :macosx :darwin :darwin-target :apple) ; also before :bsd
-       (:solaris :solaris :sunos) (:bsd :bsd :freebsd :netbsd :openbsd) :unix
+       (:solaris :solaris :sunos) (:bsd :bsd :dragonfly :freebsd :netbsd :openbsd) :unix
        :genera)))
 
   (defun architecture ()
