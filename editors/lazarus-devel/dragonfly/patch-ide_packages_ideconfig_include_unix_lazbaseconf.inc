--- ide/packages/ideconfig/include/unix/lazbaseconf.inc.orig	2023-10-28 11:46:30 UTC
+++ ide/packages/ideconfig/include/unix/lazbaseconf.inc
@@ -67,7 +67,9 @@ var
  ---------------------------------------------------------------------------}
 function FindDefaultMakePath: string;
 begin
-  {$IFDEF FreeBSD}
+  {$IF defined(FreeBSD)}
+  Result:=FindDefaultExecutablePath('gmake');
+  {$ELSEIF defined(DragonFly)}
   Result:=FindDefaultExecutablePath('gmake');
   {$ELSE}
   Result:=FindDefaultExecutablePath('make');
