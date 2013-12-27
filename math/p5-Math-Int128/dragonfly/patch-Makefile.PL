--- Makefile.PL.orig	2013-09-06 18:41:25.000000000 +0000
+++ Makefile.PL
@@ -32,19 +32,6 @@ my $mm = WriteMakefile(NAME          =>
 
 my $cc = (grep defined, $mm->{CC}, $Config{cc}, 'cc')[0];
 my $cc_version = `$cc --version --verbose 2>&1`;
-if (($cc_version =~ /^GNU\s+C\s+\([^)]*\)\s+version\s+(4\.(\d+)\S*)/im or
-         $cc_version =~ /^g?cc\s+\(GCC\)\s+(4\.(\d+)\S*)/im ) and
-        $2 >= 4) {
-    print "GNU C compiler version $1 found, good!\n";
-}
-elsif ($cc_version =~ /\bclang\s+version\s+(3.(\d+)\S*)/im and
-       $2 >= 2) {
-    print "Clang compiler version $1 found, good!\n";
-}
-else {
-    unlink $mm->{MAKEFILE};
-    die "This module requires version 4.4 or above of the GCC compiler.\nAborting!\n\n"
-}
 
 
 package MY;
