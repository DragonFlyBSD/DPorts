--- ide/include/unix/lazbaseconf.inc.orig	2021-08-20 16:54:50 UTC
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
