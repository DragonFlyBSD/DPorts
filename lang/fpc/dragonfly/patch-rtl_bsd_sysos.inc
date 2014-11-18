--- rtl/bsd/sysos.inc.orig	2007-11-10 18:22:37.000000000 +0000
+++ rtl/bsd/sysos.inc
@@ -22,7 +22,7 @@ const clib = 'c';
 type libcint=longint;
      plibcint=^libcint;
 
-{$ifdef FreeBSD} // tested on x86
+{$if defined(FreeBSD) or defined(DragonFly)} // tested on x86
 function geterrnolocation: Plibcint; cdecl;external clib name '__error';
 {$else}
 {$ifdef NetBSD} // from a sparc dump.
