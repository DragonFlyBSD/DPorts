--- packages/fcl-report/fpmake.pp.orig	2020-05-04 16:58:27 UTC
+++ packages/fcl-report/fpmake.pp
@@ -31,7 +31,7 @@ begin
     P.Email := '';
     P.Description := 'GUI-independent Reporting Engine';
     P.NeedLibC:= false;
-    P.OSes:=[linux, win32, win64, darwin, freebsd];
+    P.OSes:=[linux, win32, win64, darwin, freebsd, dragonfly];
     P.SourcePath.Add('src');
 {$IFDEF VER2_6}    
     T:=P.Targets.AddUnit('fprepexprpars.pp');
