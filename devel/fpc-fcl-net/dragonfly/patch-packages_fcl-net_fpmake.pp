--- packages/fcl-net/fpmake.pp.orig	2021-11-02 09:43:28.142741000 +0100
+++ packages/fcl-net/fpmake.pp	2021-11-02 09:43:45.542347000 +0100
@@ -73,7 +73,7 @@
         end;
     T.ResourceStrings := True;
 
-    T:=P.Targets.AddUnit('cnetdb.pp',[linux,freebsd,solaris,android]);
+    T:=P.Targets.AddUnit('cnetdb.pp',[linux,dragonfly,freebsd,solaris,android]);
 
     P.ExamplePath.Add('examples');
     P.Targets.AddExampleProgram('examples/ip6test.pp');
