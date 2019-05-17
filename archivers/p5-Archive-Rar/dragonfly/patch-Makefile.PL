--- Makefile.PL.orig	2008-03-06 10:12:17 UTC
+++ Makefile.PL
@@ -17,7 +17,7 @@ if ($iswindows) {
 build_requires 'Test::Simple'     => '0';
 build_requires 'Test::More'       => '0';
 
-if (not $iswindows) {
+if (not $iswindows and not $^O =~ /dragonfly/i) {
   requires_external_bin 'rar';
 } else {
   warn "We cannot check at this time that there is a 'rar' command when running on Windows. Please make sure that you have RAR or WinRAR installed before proceeding.";
