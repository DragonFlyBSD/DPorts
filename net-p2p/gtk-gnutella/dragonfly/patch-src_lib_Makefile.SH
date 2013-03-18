--- src/lib/Makefile.SH.orig	2012-11-11 16:29:37.000000000 +0000
+++ src/lib/Makefile.SH
@@ -44,7 +44,7 @@ JCFLAGS = \$(CFLAGS) $optimize $ccflags
 JCPPFLAGS = $cppflags
 JLDFLAGS = \$(LDFLAGS) $optimize $ldflags
 JYFLAGS = \$(YFLAGS) $yaccflags
-LIBS = $libs
+LIBS = $libs -lintl -liconv
 MKDEP = $mkdep \$(DPFLAGS) \$(JCPPFLAGS) --
 MV = $mv
 RANLIB = $ranlib
@@ -61,7 +61,7 @@ SOURCES =  \$(LSRC)  float-test.c  sort-
 OBJECTS =  \$(LOBJ)  float-test.o  sort-test.o
 GLIB_CFLAGS =  $glibcflags
 DBUS_CFLAGS =  $dbuscflags
-COMMON_LIBS =  $libs
+COMMON_LIBS =  $libs -lintl -liconv
 
 ########################################################################
 # New suffixes and associated building rules -- edit with care
@@ -537,7 +537,6 @@ local_clobber:: local_realclean
 	$(RM) Makefile config.sh
 
 install:: local_install
-	@exit 0
 
 install.man:: maybe_install.man
 deinstall:: local_deinstall
