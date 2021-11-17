--- packages/libxml/fpmake.pp.orig	2021-11-16 16:14:23.554352000 +0100
+++ packages/libxml/fpmake.pp	2021-11-16 16:14:39.883987000 +0100
@@ -18,7 +18,7 @@
     P.Directory:=ADirectory;
 {$endif ALLPACKAGES}
     P.Version:='3.2.2';
-    P.OSes := [freebsd,linux,win32];
+    P.OSes := [dragonfly,freebsd,linux,win32];
     P.SourcePath.Add('src');
     P.IncludePath.Add('src');
     P.Dependencies.Add('rtl-objpas');
