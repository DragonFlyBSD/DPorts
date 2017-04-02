--- packages/fcl-net/fpmake.pp.orig	2017-02-04 15:11:06 UTC
+++ packages/fcl-net/fpmake.pp
@@ -70,7 +70,7 @@ begin
         end;
     T.ResourceStrings := True;
 
-    T:=P.Targets.AddUnit('cnetdb.pp',[linux,freebsd,solaris]);
+    T:=P.Targets.AddUnit('cnetdb.pp',[linux,dragonfly,freebsd,solaris]);
 
     P.ExamplePath.Add('examples');
     P.Targets.AddExampleProgram('examples/ip6test.pp');
