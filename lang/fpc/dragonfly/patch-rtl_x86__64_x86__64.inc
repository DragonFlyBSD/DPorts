--- rtl/x86_64/x86_64.inc.orig	2013-05-21 10:24:47.000000000 +0000
+++ rtl/x86_64/x86_64.inc
@@ -66,6 +66,11 @@ end;
     {$define oldbinutils}
   {$endif}
 {$endif freebsd}
+{$ifdef dragonfly}
+// the move routine seems to be busted -- we have new binutils but let's not trust this
+// assembly for now
+  {$define oldbinutils}
+{$endif dragonfly}  
 
 {$ifndef oldbinutils}
 
