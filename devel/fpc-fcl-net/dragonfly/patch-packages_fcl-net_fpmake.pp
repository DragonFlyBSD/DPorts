--- packages/fcl-net/fpmake.pp.orig	2015-11-13 21:15:29 UTC
+++ packages/fcl-net/fpmake.pp
@@ -70,7 +70,7 @@ begin
         end;
     T.ResourceStrings := True;
 
-    T:=P.Targets.AddUnit('cnetdb.pp',[linux,freebsd]);
+    T:=P.Targets.AddUnit('cnetdb.pp',[linux,dragonfly,freebsd]);
 
     P.ExamplePath.Add('examples');
     P.Targets.AddExampleProgram('examples/ip6test.pp');
