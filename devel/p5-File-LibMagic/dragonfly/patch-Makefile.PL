--- Makefile.PL.orig	2009-05-12 13:31:06.000000000 +0000
+++ Makefile.PL
@@ -7,7 +7,7 @@ use Config qw/%Config/;
 use lib qw(inc);
 use Devel::CheckLib;
 
-check_lib_or_exit( lib => 'magic', header => 'magic.h' );
+#check_lib_or_exit( lib => 'magic', header => 'magic.h' );
 
 WriteMakefile(
     'NAME'		=> 'File::LibMagic',
