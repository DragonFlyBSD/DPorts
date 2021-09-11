--- Makefile.PL.orig	2021-03-05 17:25:15 UTC
+++ Makefile.PL
@@ -6,7 +6,7 @@ use Config;
 
 my $module_name = 'BSD::Sysctl';
 
-if ($Config{osname} ne 'freebsd') {
+if ($Config{osname} ne 'freebsd' and $Config{osname} ne 'dragonfly') {
     die "OS unsupported ($Config{osname}). Here's a nickel, go buy yourself a real OS.\n";
 }
 
