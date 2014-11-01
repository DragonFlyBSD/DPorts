--- Makefile.PL.orig	2009-09-25 19:50:50 UTC
+++ Makefile.PL
@@ -6,7 +6,7 @@
 
 my $module_name = 'BSD::Sysctl';
 
-if ($Config{osname} ne 'freebsd') {
+if ($Config{osname} ne 'freebsd' and $Config{osname} ne 'dragonfly') {
     die "OS unsupported ($Config{osname}). Here's a nickel, go buy yourself a real OS.\n";
 }
 
