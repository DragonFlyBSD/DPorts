Should be ok.
--- lib/PerlPoint/Parser.pm.orig	2007-10-10 21:33:00 UTC
+++ lib/PerlPoint/Parser.pm
@@ -2122,7 +2122,7 @@ B<Example:>
                     nonWhitespace    => qr/$patternNlbBackslash(\S)/,
                     colon            => qr/$patternNlbBackslash(:)/,
                     namedVarKernel   => qr/\$($patternWUmlauts)/,
-                    symVarKernel     => qr/\$({($patternWUmlauts)})/,
+                    symVarKernel     => qr/\$(\{($patternWUmlauts)\})/,
                    );
   @lexerPatterns{qw(
                     namedVar
