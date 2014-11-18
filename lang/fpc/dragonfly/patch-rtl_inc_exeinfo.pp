--- rtl/inc/exeinfo.pp.orig	2013-06-23 13:50:17.000000000 +0000
+++ rtl/inc/exeinfo.pp
@@ -109,7 +109,7 @@ uses
                              Executable Loaders
 ****************************************************************************}
 
-{$if defined(freebsd) or defined(netbsd) or defined (openbsd) or defined(linux) or defined(sunos)}
+{$if defined(freebsd) or defined(netbsd) or defined (openbsd) or defined(linux) or defined(sunos) or defined(dragonfly) }
   {$ifdef cpu64}
     {$define ELF64}
   {$else}
