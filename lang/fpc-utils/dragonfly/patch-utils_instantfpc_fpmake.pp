--- utils/instantfpc/fpmake.pp.orig	2021-11-10 10:37:46.159862000 +0100
+++ utils/instantfpc/fpmake.pp	2021-11-10 10:37:58.399592000 +0100
@@ -33,7 +33,7 @@
     P.Dependencies.Add('fcl-process');
     P.Options.Add('-S2h');
 
-    P.OSes := [win32,win64,wince,haiku,linux,freebsd,openbsd,netbsd,darwin,iphonesim,ios,solaris,aix];
+    P.OSes := [win32,win64,wince,haiku,linux,dragonfly,freebsd,openbsd,netbsd,darwin,iphonesim,ios,solaris,aix];
 
     T:=P.Targets.AddProgram('instantfpc.pas');
     T.Dependencies.AddUnit('instantfptools');
