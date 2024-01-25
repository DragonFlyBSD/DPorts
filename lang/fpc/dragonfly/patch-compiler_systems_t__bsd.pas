--- compiler/systems/t_bsd.pas.intermediate	2024-01-09 11:17:14 UTC
+++ compiler/systems/t_bsd.pas
@@ -116,6 +116,8 @@ begin
      LibrarySearchPath.AddLibraryPath(sysrootpath,'=/usr/lib;=$OPENBSD_X11BASE/lib;=$OPENBSD_LOCALBASE/lib',true)
    else if target_info.system in systems_freebsd then
      LibrarySearchPath.AddLibraryPath(sysrootpath,'=/usr/lib;=$FREEBSD_LOCALBASE/lib',true)
+   else if target_info.system in systems_dragonfly then
+     LibrarySearchPath.AddLibraryPath(sysrootpath,'=/usr/lib;=$FREEBSD_LOCALBASE/lib',true)
    else
      LibrarySearchPath.AddLibraryPath(sysrootpath,'=/lib;=/usr/lib;=/usr/X11R6/lib',true);
 end;
@@ -128,7 +130,7 @@ procedure TLinkerBSD.SetDefaultInfo;
 var
   LdProgram: string='ld';
 begin
-  if target_info.system in systems_freebsd then
+  if target_info.system in (systems_freebsd+[system_x86_64_dragonfly]) then
   begin
     LdProgram:=GetEnvPChar('FPC_LDPATH');
     if not FileExists(LdProgram,True) then
