--- Makefile.PL.orig	2015-05-25 14:22:41.000000000 +0300
+++ Makefile.PL
@@ -17,6 +17,7 @@ elsif($os =~ /^Linux/)     { $config='li
 elsif($os =~ /^AIX/)       { $config='aix_4_1.h'; }
 elsif($os =~ /^BSD\/OS 2/ ||
       $os =~ /^Darwin/    ||
+      $os =~ /^DragonFly/ ||
       $os =~ /^FreeBSD/   ||
       $os =~ /^NetBSD/    ||
       $os =~ /^OpenBSD/)   { $config='bsd.h'; }
