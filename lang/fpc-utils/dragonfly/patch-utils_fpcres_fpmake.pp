--- utils/fpcres/fpmake.pp.orig	2015-11-13 23:15:29.000000000 +0200
+++ utils/fpcres/fpmake.pp
@@ -27,7 +27,7 @@ begin
     P.Directory:=ADirectory;
     P.Version:='3.0.0';
 
-    P.OSes:=[win32,win64,wince,haiku,linux,freebsd,openbsd,netbsd,darwin,iphonesim,solaris,os2,emx,aix,aros,amiga,morphos];
+    P.OSes:=[win32,win64,wince,haiku,linux,freebsd,openbsd,netbsd,darwin,iphonesim,solaris,os2,emx,aix,aros,amiga,morphos,dragonfly];
 
     P.Dependencies.Add('fcl-res');
     P.Dependencies.Add('paszlib');
