--- Makefile.PL.orig	2018-03-14 20:23:37 UTC
+++ Makefile.PL
@@ -9,7 +9,7 @@ use ExtUtils::MakeMaker 6.48;
 use ExtUtils::Liblist;
 use Config;
 
-my $libs = $^O eq 'freebsd' ? '-ltidy5' : '-ltidy';
+my $libs = ($^O eq 'freebsd' or $^O eq 'dragonfly') ? '-ltidy5' : '-ltidy';
 my $inc = "-I. -I/usr/include/tidy -I/usr/local/include/tidy -I$Config{usrinc}/tidy";
 
 if ( not eval { require LWP::Simple; 1; } ) {
