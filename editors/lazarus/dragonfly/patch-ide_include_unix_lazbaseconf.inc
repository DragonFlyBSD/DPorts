--- ide/include/unix/lazbaseconf.inc.orig	2013-09-05 13:24:48.000000000 +0300
+++ ide/include/unix/lazbaseconf.inc
@@ -79,6 +79,9 @@ begin
   {$ELSE}
   Result:=FindDefaultExecutablePath('make');
   {$ENDIF}
+  {$IFDEF dragonfly}
+  Result:=FindDefaultExecutablePath('gmake');
+  {$ENDIF}
 end;
 
 function GetDefaultCompiledUnitExt(FPCVersion, FPCRelease: integer): string;
