--- compiler/systems/t_bsd.pas.orig	Thu Feb 27 21:14:17 2025
+++ compiler/systems/t_bsd.pas	Thu Feb
@@ -116,6 +116,8 @@ begin
      LibrarySearchPath.AddLibraryPath(sysrootpath,'=/usr/lib;=$OPENBSD_X11BASE/lib;=$OPENBSD_LOCALBASE/lib',true)
    else if target_info.system in systems_freebsd then
      LibrarySearchPath.AddLibraryPath(sysrootpath,'=/usr/lib;=$FREEBSD_LOCALBASE/lib',true)
+   else if target_info.system in systems_dragonfly then
+     LibrarySearchPath.AddLibraryPath(sysrootpath,'=/usr/lib;=$FREEBSD_LOCALBASE/lib',true)
    else
      LibrarySearchPath.AddLibraryPath(sysrootpath,'=/lib;=/usr/lib;=/usr/X11R6/lib',true);
 end;
