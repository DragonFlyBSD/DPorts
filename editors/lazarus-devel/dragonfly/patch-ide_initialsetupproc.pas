--- ide/initialsetupproc.pas.orig	2021-12-17 07:24:33 UTC
+++ ide/initialsetupproc.pas
@@ -982,6 +982,9 @@ begin
     {$ELSE}
     AFilename:='make';
     {$ENDIF}
+    {$IFDEF dragonfly}
+    AFilename:='gmake';
+    {$ENDIF}
     AFilename+=GetExecutableExt;
     if CheckFile(FindDefaultExecutablePath(AFilename),Result) then exit;
 
