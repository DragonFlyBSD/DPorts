--- sitelib/ypsilon/ffi.scm.orig	2008-12-23 10:55:52.000000000 +0200
+++ sitelib/ypsilon/ffi.scm
@@ -4,7 +4,7 @@
 ;;; See license.txt for terms and conditions of use.
 
 (library (ypsilon ffi)
-  (export on-darwin on-linux on-freebsd on-openbsd on-windows on-posix
+  (export on-darwin on-linux on-freebsd on-dragonfly on-openbsd on-windows on-posix
           on-ia32 on-x64
           load-shared-object
           c-function
@@ -64,6 +64,7 @@
   (define on-darwin        (and (string-contains (architecture-feature 'operating-system) "darwin")  #t))
   (define on-linux         (and (string-contains (architecture-feature 'operating-system) "linux")   #t))
   (define on-freebsd       (and (string-contains (architecture-feature 'operating-system) "freebsd") #t))
+  (define on-dragonfly     (and (string-contains (architecture-feature 'operating-system) "dragonfly") #t))
   (define on-openbsd       (and (string-contains (architecture-feature 'operating-system) "openbsd") #t))
   (define on-windows       (and (string-contains (architecture-feature 'operating-system) "windows") #t))
   (define on-posix         (not on-windows))
