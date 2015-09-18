--- Makefile.PL.orig	2015-01-26 16:49:41.122535198 +0200
+++ Makefile.PL
@@ -9,7 +9,7 @@ $ARGV{WITHOUT_TENTACLE} or push @exe_fil
 
 WriteMakefile(
 	INSTALLSITELIB  => '/usr/lib/perl5',
-	(($^O eq 'freebsd')
+	(($^O =~ /^(freebsd|dragonfly)$/)
 		? (INSTALLSITELIB => '') : ()
 	),
 	($^O eq 'netbsd') ? (
