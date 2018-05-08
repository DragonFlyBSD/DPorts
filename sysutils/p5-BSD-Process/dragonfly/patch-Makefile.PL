--- Makefile.PL.orig	2013-06-22 16:29:37 UTC
+++ Makefile.PL
@@ -8,7 +8,7 @@
 
 my $module_name = 'BSD::Process';
 
-if ($Config{osname} ne 'freebsd') {
+if ($Config{osname} ne 'freebsd' and $Config{osname} ne 'dragonfly') {
     die "OS unsupported ($Config{osname}). Here's a nickel, go buy yourself a real OS.\n";
 }
 
