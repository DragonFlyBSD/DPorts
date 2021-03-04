--- packages/ide/fpmake.pp.orig	2020-05-04 16:58:27 UTC
+++ packages/ide/fpmake.pp
@@ -11,7 +11,7 @@ const
   NoGDBOption: boolean = false;
   GDBMIOption: boolean = false;
   GDBMI_Disabled: boolean = false;
-  GDBMI_DEFAULT_OSes = [aix, darwin, freebsd, haiku,linux, netbsd, openbsd, solaris, win32, win64];
+  GDBMI_DEFAULT_OSes = [aix, darwin, freebsd, haiku,linux, netbsd, openbsd, solaris, win32, win64, dragonfly];
 
 procedure ide_check_gdb_availability(Sender: TObject);
 
@@ -106,7 +106,7 @@ begin
                           P.Options.Add('-Xe');
                           P.Options.Add('-k--allow-multiple-definition');
                         end;
-              freebsd : begin
+              freebsd, dragonfly : begin
                           P.Options.Add('-Fl/usr/local/lib');
                           P.Options.Add('-Xd');
                         end;
@@ -190,12 +190,12 @@ begin
       does not depend on C libs }
     if ((GDBMIOption or NoGDBOption) and
         ((Defaults.BuildOS=Defaults.OS) and (Defaults.BuildCPU=Defaults.CPU)
-         or (Defaults.OS in [go32v2,win32,win64,linux,freebsd])
+         or (Defaults.OS in [go32v2,win32,win64,linux,freebsd,dragonfly])
          or not Defaults.SkipCrossPrograms)) or
        { This is the list of native targets that can be compiled natively with gdbint packages }
        ((((Defaults.BuildOS=Defaults.OS) and (Defaults.BuildCPU=Defaults.CPU)) or
           not Defaults.SkipCrossPrograms) and
-        (Defaults.OS in [go32v2,win32,win64,linux,freebsd,os2,emx,beos,haiku])
+        (Defaults.OS in [go32v2,win32,win64,linux,freebsd,os2,emx,beos,haiku,dragonfly])
        ) then
       begin
         P:=AddPackage('ide');
