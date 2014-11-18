--- packages/fcl-net/fpmake.pp.orig	2014-02-25 11:05:54 UTC
+++ packages/fcl-net/fpmake.pp
@@ -52,14 +52,14 @@ begin
     T.ResourceStrings := True;
 
     // HTTP Client
-    T:=P.Targets.AddUnit('fpsock.pp',[linux,freebsd,netbsd,openbsd]);
+    T:=P.Targets.AddUnit('fpsock.pp',[linux,dragonfly,freebsd,netbsd,openbsd]);
       with T.Dependencies do
         begin
           AddUnit('resolve');
         end;
     T.ResourceStrings := True;
 
-    T:=P.Targets.AddUnit('cnetdb.pp',[linux,freebsd]);
+    T:=P.Targets.AddUnit('cnetdb.pp',[linux,freebsd,dragonfly]);
 
     P.ExamplePath.Add('examples');
     P.Targets.AddExampleProgram('examples/ip6test.pp');
