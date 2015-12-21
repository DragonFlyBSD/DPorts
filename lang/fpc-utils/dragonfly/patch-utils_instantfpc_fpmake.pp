--- utils/instantfpc/fpmake.pp.orig	2015-11-13 23:15:29.000000000 +0200
+++ utils/instantfpc/fpmake.pp
@@ -30,7 +30,7 @@ begin
     P.Dependencies.Add('fcl-process');
     P.Options.Add('-S2h');
 
-    P.OSes := [win32,win64,wince,haiku,linux,freebsd,openbsd,netbsd,darwin,iphonesim,solaris,aix];
+    P.OSes := [win32,win64,wince,haiku,linux,freebsd,openbsd,netbsd,darwin,iphonesim,solaris,aix,dragonfly];
 
     T:=P.Targets.AddProgram('instantfpc.pas');
     T.Dependencies.AddUnit('instantfptools');
