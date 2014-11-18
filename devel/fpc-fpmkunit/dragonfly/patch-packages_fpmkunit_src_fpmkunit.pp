--- packages/fpmkunit/src/fpmkunit.pp.orig	2014-02-22 19:04:19 UTC
+++ packages/fpmkunit/src/fpmkunit.pp
@@ -82,7 +82,8 @@ Type
     linux,go32v2,win32,os2,freebsd,beos,netbsd,
     amiga,atari, solaris, qnx, netware, openbsd,wdosx,
     palmos,macos,darwin,emx,watcom,morphos,netwlibc,
-    win64,wince,gba,nds,embedded,symbian,haiku,iphonesim
+    win64,wince,gba,nds,embedded,symbian,haiku,iphonesim,
+    dragonfly
   );
   TOSes = Set of TOS;
 
@@ -173,7 +174,8 @@ Const
     { embedded }( false, true,  true,  true,  true,  true,  true,  true,  true,  true ),
     { symbian } ( false, true,  false, false, false, false, true,  false, false, false),
     { haiku }   ( false, true,  false, false, false, false, false, false, false, false),
-    { iphonesim}( false, true,  false, false, false, false, false, false, false, false)
+    { iphonesim}( false, true,  false, false, false, false, false, false, false, false),
+    { dragonfly}( false, false, false, false, false, true, false, false, false, false)
   );
 
   // Useful
