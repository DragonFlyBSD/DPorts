--- ide/packages/ideconfig/include/unix/lazbaseconf.inc.orig	2023-12-17 10:23:58 UTC
+++ ide/packages/ideconfig/include/unix/lazbaseconf.inc
@@ -72,6 +72,9 @@ begin
   {$ELSE}
   Result:=FindDefaultExecutablePath('make');
   {$ENDIF}
+  {$IFDEF dragonfly}
+  Result:=FindDefaultExecutablePath('gmake');
+  {$ENDIF}
 end;
 
 function GetDefaultCompiledUnitExt(FPCVersion, FPCRelease: integer): string;
