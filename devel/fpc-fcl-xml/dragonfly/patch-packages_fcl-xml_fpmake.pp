--- packages/fcl-xml/fpmake.pp.orig	2021-10-28 17:11:26.196136000 +0200
+++ packages/fcl-xml/fpmake.pp	2021-10-28 17:10:12.357806000 +0200
@@ -21,7 +21,7 @@
     P.Version:='3.2.2';
     P.Options.Add('-S2h');
     D:=P.Dependencies.Add('fcl-base');
-    D:=P.Dependencies.Add('iconvenc',[linux,darwin,iphonesim,ios,freebsd,haiku,beos,aix]);
+    D:=P.Dependencies.Add('iconvenc',[linux,darwin,iphonesim,ios,dragonfly,freebsd,haiku,beos,aix]);
 
     P.Author := 'Sebastian Guenther, Sergei Gorelkin and FPC development team';
     P.License := 'LGPL with modification, ';
@@ -152,7 +152,7 @@
           AddUnit('dom');
           AddUnit('htmldefs');
         end;
-    T:=P.Targets.AddUnit('xmliconv.pas',[linux,freebsd,darwin,iphonesim,ios,haiku,beos,aix]);
+    T:=P.Targets.AddUnit('xmliconv.pas',[linux,dragonfly,freebsd,darwin,iphonesim,ios,haiku,beos,aix]);
       with T.Dependencies do
         begin
           AddUnit('xmlread');
