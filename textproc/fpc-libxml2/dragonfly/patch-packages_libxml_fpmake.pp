--- packages/libxml/fpmake.pp.orig	2015-11-13 21:15:29 UTC
+++ packages/libxml/fpmake.pp
@@ -17,7 +17,7 @@ begin
     P.Directory:=ADirectory;
 {$endif ALLPACKAGES}
     P.Version:='3.0.0';
-    P.OSes := [freebsd,linux,win32];
+    P.OSes := [dragonfly,freebsd,linux,win32];
     P.SourcePath.Add('src');
     P.IncludePath.Add('src');
     P.Dependencies.Add('rtl-objpas');
