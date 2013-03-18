--- src/Makefile.SH.orig	2012-11-11 16:29:34.000000000 +0000
+++ src/Makefile.SH
@@ -49,7 +49,7 @@ JCFLAGS = \$(CFLAGS) $optimize $ccflags
 JCPPFLAGS = $cppflags
 JLDFLAGS = \$(LDFLAGS) $optimize $ldflags
 L = $manext
-LIBS = $libs
+LIBS = $libs -lintl -liconv
 MANSRC = $installmansrc
 MKDEP = $mkdep \$(DPFLAGS) \$(JCPPFLAGS) --
 MV = $mv
@@ -354,7 +354,6 @@ local_clobber:: local_realclean
 	$(RM) Makefile config.sh
 
 install:: local_install sub_install
-	@exit 0
 
 install.man:: maybe_install.man sub_install.man
 deinstall:: sub_deinstall local_deinstall
