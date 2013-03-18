--- src/sdbm/Makefile.SH.orig	2012-11-11 16:29:43.000000000 +0000
+++ src/sdbm/Makefile.SH
@@ -43,7 +43,7 @@ _EXE = $_exe
 JCFLAGS = \$(CFLAGS) $optimize $ccflags $large
 JCPPFLAGS = $cppflags
 JLDFLAGS = \$(LDFLAGS) $optimize $ldflags
-LIBS = $libs
+LIBS = $libs -lintl -liconv
 MKDEP = $mkdep \$(DPFLAGS) \$(JCPPFLAGS) --
 MV = $mv
 RANLIB = $ranlib
@@ -58,7 +58,7 @@ GLIB_LDFLAGS =  $glibldflags
 SOURCES =   \$(SRC)  \$(DBA_SRC)  \$(DBU_SRC)  \$(DBE_SRC)  \$(DBT_SRC)
 OBJECTS =   \$(OBJ)  \$(DBA_OBJ)  \$(DBU_OBJ)  \$(DBE_OBJ)  \$(DBT_OBJ)
 GLIB_CFLAGS =  $glibcflags
-COMMON_LIBS =  $libs
+COMMON_LIBS =  $libs -lintl -liconv
 
 ########################################################################
 # New suffixes and associated building rules -- edit with care
