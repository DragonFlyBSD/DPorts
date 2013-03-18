--- extra_files/fr/Makefile.SH.orig	2013-03-18 16:01:32.421310000 +0000
+++ extra_files/fr/Makefile.SH
@@ -89,7 +89,6 @@ local_clobber:: local_realclean
 	$(RM) Makefile config.sh
 
 install:: local_install
-	@exit 0
 
 install.man:: maybe_install.man
 deinstall:: local_deinstall
