--- packages/libfontconfig/fpmake.pp.orig	2020-05-04 16:58:27 UTC
+++ packages/libfontconfig/fpmake.pp
@@ -20,7 +20,7 @@ begin
     P.Version:='3.2.0';
     P.SourcePath.Add('src');
     P.IncludePath.Add('src');
-    P.OSes := [linux,freebsd, darwin]; // Darwin was tested!
+    P.OSes := [dragonfly,linux,freebsd, darwin]; // Darwin was tested!
     T:=P.Targets.AddUnit('libfontconfig.pp');
     P.ExamplePath.Add('examples');
     P.Targets.AddExampleProgram('testfc.pp');
