--- xpcom/reflect/xptcall/genstubs.pl.orig	2017-11-23 08:28:13 UTC
+++ xpcom/reflect/xptcall/genstubs.pl
@@ -44,7 +44,7 @@ print OUTFILE "*  0 is QueryInterface\n"
 print OUTFILE "*  1 is AddRef\n";
 print OUTFILE "*  2 is Release\n";
 print OUTFILE "*/\n";
-print OUTFILE "#if !defined(__ia64) || (!defined(__hpux) && !defined(__linux__) && !defined(__FreeBSD__))\n";
+print OUTFILE "#if !defined(__ia64) || (!defined(__hpux) && !defined(__linux__) && !defined(__FreeBSD__) && !defined(__DragonFly__))\n";
 for($i = 0; $i < $entry_count; $i++) {
     print OUTFILE "NS_IMETHOD Stub",$i+3,"();\n";
 }
