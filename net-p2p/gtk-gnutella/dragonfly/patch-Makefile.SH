--- Makefile.SH.orig	2012-11-11 16:29:22.000000000 +0000
+++ Makefile.SH
@@ -92,7 +92,6 @@ local_clobber:: local_realclean
 	$(RM) Makefile
 
 install:: local_install sub_install
-	@exit 0
 
 install.man:: maybe_install.man sub_install.man
 deinstall:: sub_deinstall local_deinstall
