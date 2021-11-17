--- packages/gmp/fpmake.pp.orig	2021-11-16 16:17:25.150299000 +0100
+++ packages/gmp/fpmake.pp	2021-11-16 16:17:37.460021000 +0100
@@ -24,7 +24,7 @@
     P.Email := '';
     P.Description := 'GMP';
     P.NeedLibC:= false;
-    P.OSes := [freebsd,darwin,iphonesim,ios,linux,win32,aix];
+    P.OSes := [dragonfly,freebsd,darwin,iphonesim,ios,linux,win32,aix];
 
     P.SourcePath.Add('src');
 
