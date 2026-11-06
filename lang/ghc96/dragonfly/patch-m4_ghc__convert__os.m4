--- m4/ghc_convert_os.m4.orig	2025-03-02 13:05:33 UTC
+++ m4/ghc_convert_os.m4
@@ -41,6 +41,9 @@ AC_DEFUN([GHC_CONVERT_OS],[
       solaris2*)
         $3="solaris2"
         ;;
+      dragonfly*)
+        $3="dragonfly"
+        ;;
       freebsd*) # like i686-gentoo-freebsd7
                 #      i686-gentoo-freebsd8
                 #      i686-gentoo-freebsd8.2
