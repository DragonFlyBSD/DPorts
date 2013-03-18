--- extra_files/tr/Makefile.SH.orig	2012-11-11 16:29:31.000000000 +0000
+++ extra_files/tr/Makefile.SH
@@ -89,7 +89,6 @@ local_clobber:: local_realclean
 	$(RM) Makefile config.sh
 
 install:: local_install
-	@exit 0
 
 install.man:: maybe_install.man
 deinstall:: local_deinstall
