--- cf/auth-modules.m4.orig	2016-11-29 03:35:27.000000000 +0200
+++ cf/auth-modules.m4
@@ -18,7 +18,7 @@ fi
 ;;
 pam)
 case "${host}" in
-*-*-freebsd*)	ac_cv_want_pam_krb4=no ;;
+*-*-freebsd*|*-*-dragonfly*)	ac_cv_want_pam_krb4=no ;;
 *)		ac_cv_want_pam_krb4=yes ;;
 esac
 
