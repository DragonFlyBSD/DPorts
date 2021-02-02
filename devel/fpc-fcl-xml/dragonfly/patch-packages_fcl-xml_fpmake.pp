--- packages/fcl-xml/fpmake.pp.orig	2021-01-31 18:11:35.608481000 +0100
+++ packages/fcl-xml/fpmake.pp	2021-01-31 18:12:15.078632000 +0100
@@ -21,7 +21,7 @@
     P.Version:='3.2.0';
     P.Options.Add('-S2h');
     D:=P.Dependencies.Add('fcl-base');
-    D:=P.Dependencies.Add('iconvenc',[linux,darwin,iphonesim,freebsd,haiku,beos,aix]);
+    D:=P.Dependencies.Add('iconvenc',[linux,darwin,iphonesim,dragonfly,freebsd,haiku,beos,aix]);
 
     P.Author := 'Sebastian Guenther, Sergei Gorelkin and FPC development team';
     P.License := 'LGPL with modification, ';
@@ -152,7 +152,7 @@
           AddUnit('dom');
           AddUnit('htmldefs');
         end;
-    T:=P.Targets.AddUnit('xmliconv.pas',[linux,freebsd,darwin,iphonesim,haiku,beos,aix]);
+    T:=P.Targets.AddUnit('xmliconv.pas',[linux,dragonfly,freebsd,darwin,iphonesim,haiku,beos,aix]);
       with T.Dependencies do
         begin
           AddUnit('xmlread');
