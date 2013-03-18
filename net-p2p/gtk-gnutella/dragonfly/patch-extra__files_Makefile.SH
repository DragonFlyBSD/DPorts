--- extra_files/Makefile.SH.orig	2012-11-11 16:29:26.000000000 +0000
+++ extra_files/Makefile.SH
@@ -186,7 +186,6 @@ local_clobber:: local_realclean
 	$(RM) Makefile config.sh
 
 install:: local_install sub_install
-	@exit 0
 
 install.man:: maybe_install.man sub_install.man
 deinstall:: sub_deinstall local_deinstall
