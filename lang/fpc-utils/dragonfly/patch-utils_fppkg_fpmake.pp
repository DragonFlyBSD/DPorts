--- utils/fppkg/fpmake.pp.orig	2015-11-13 23:15:29.000000000 +0200
+++ utils/fppkg/fpmake.pp
@@ -8,7 +8,7 @@ uses fpmkunit;
 procedure add_fppkg_util(const ADirectory: string);
 
 const
-  lnetOSes = [linux,beos,haiku,freebsd,netbsd,openbsd,darwin,iphonesim,solaris,win32,win64,wince,aix];
+  lnetOSes = [linux,beos,haiku,freebsd,netbsd,openbsd,darwin,iphonesim,solaris,win32,win64,wince,aix,dragonfly];
 
 Var
   P : TPackage;
@@ -40,7 +40,7 @@ begin
     P.Dependencies.Add('fcl-process');
     P.Dependencies.Add('fcl-net');
     P.Dependencies.Add('paszlib');
-    //P.Dependencies.Add('libcurl',[beos,haiku,freebsd,darwin,iphonesim,solaris,netbsd,openbsd,linux,aix]);
+    //P.Dependencies.Add('libcurl',[beos,haiku,freebsd,darwin,iphonesim,solaris,netbsd,openbsd,linux,aix,dragonfly]);
     P.Dependencies.Add('fppkg');
     P.Dependencies.Add('univint', [Darwin, iphonesim]);
 
