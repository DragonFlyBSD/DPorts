--- pixmaps/Makefile.SH.orig	2012-11-11 16:29:32.000000000 +0000
+++ pixmaps/Makefile.SH
@@ -146,7 +146,6 @@ local_clobber:: local_realclean
 	$(RM) Makefile config.sh
 
 install:: local_install
-	@exit 0
 
 install.man:: maybe_install.man
 deinstall:: local_deinstall
