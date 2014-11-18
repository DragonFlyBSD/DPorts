--- rtl/unix/initc.pp.orig	2012-01-01 17:50:36.000000000 +0000
+++ rtl/unix/initc.pp
@@ -55,7 +55,7 @@ end;
 function geterrnolocation: pcint; cdecl;external clib name '__errno_location';
 {$endif}
 
-{$ifdef FreeBSD} // tested on x86
+{$if defined(FreeBSD) or defined(DragonFly)} // tested on x86
 function geterrnolocation: pcint; cdecl;external clib name '__error';
 {$endif}
 
