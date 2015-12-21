--- ide/initialsetupproc.pas.orig	2015-03-12 01:53:21.000000000 +0200
+++ ide/initialsetupproc.pas
@@ -853,6 +853,9 @@ begin
     {$ELSE}
     AFilename:='make';
     {$ENDIF}
+    {$IFDEF dragonfly}
+    AFilename:='gmake';
+    {$ENDIF}
     AFilename+=GetExecutableExt;
     if CheckFile(FindDefaultExecutablePath(AFilename),Result) then exit;
 
