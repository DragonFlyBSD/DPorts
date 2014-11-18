--- rtl/unix/dl.pp.orig	2012-02-11 12:31:33.000000000 +0000
+++ rtl/unix/dl.pp
@@ -27,7 +27,7 @@ const
   {$endif}
 {$endif}
 
-{$if defined(linux) or defined(freebsd) or defined(openbsd)}
+{$if defined(linux) or defined(freebsd) or defined(openbsd) or defined(dragonfly)}
   {$define ELF} // ELF symbol versioning.
 {$endif}
 
