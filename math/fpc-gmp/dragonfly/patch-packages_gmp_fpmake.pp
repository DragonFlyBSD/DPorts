--- packages/gmp/fpmake.pp.orig	2015-11-13 21:15:29 UTC
+++ packages/gmp/fpmake.pp
@@ -24,7 +24,7 @@ begin
     P.Email := '';
     P.Description := 'GMP';
     P.NeedLibC:= false;
-    P.OSes := [freebsd,darwin,iphonesim,linux,win32,aix];
+    P.OSes := [dragonfly,freebsd,darwin,iphonesim,linux,win32,aix];
 
     P.SourcePath.Add('src');
 
