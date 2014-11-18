--- compiler/systems/t_bsd.pas.orig	2013-11-03 13:15:56.000000000 +0000
+++ compiler/systems/t_bsd.pas
@@ -488,10 +488,19 @@ begin
   if linklibc and
      not IsDarwin Then
    begin
-     if librarysearchpath.FindFile('crtbegin.o',false,s) then
-      LinkRes.AddFileName(s);
      if librarysearchpath.FindFile('crti.o',false,s) then
       LinkRes.AddFileName(s);
+     if cs_create_pic in current_settings.moduleswitches then
+       begin
+         if librarysearchpath.FindFile('crtbeginS.o',false,s) then
+           LinkRes.AddFileName(s);
+       end
+       else
+         if (cs_link_staticflag in current_settings.globalswitches) and
+           librarysearchpath.FindFile('crtbeginT.o',false,s) then
+             LinkRes.AddFileName(s)
+         else if librarysearchpath.FindFile('crtbegin.o',false,s) then
+             LinkRes.AddFileName(s);
    end;
   { main objectfiles }
   while not ObjectFiles.Empty do
@@ -576,7 +585,10 @@ begin
   if linklibc and
      not IsDarwin Then
    begin
-     Fl1:=librarysearchpath.FindFile('crtend.o',false,s1);
+     if cs_create_pic in current_settings.moduleswitches then
+       Fl1:=librarysearchpath.FindFile('crtendS.o',false,s1)
+     else
+       Fl1:=librarysearchpath.FindFile('crtend.o',false,s1);
      Fl2:=librarysearchpath.FindFile('crtn.o',false,s2);
      if Fl1 or Fl2 then
       begin
@@ -847,6 +859,10 @@ initialization
   RegisterImport(system_x86_64_freebsd,timportlibbsd);
   RegisterExport(system_x86_64_freebsd,texportlibbsd);
   RegisterTarget(system_x86_64_freebsd_info);
+  RegisterExternalLinker(system_x86_64_DragonFly_info,TLinkerBSD);
+  RegisterImport(system_x86_64_dragonfly,timportlibbsd);
+  RegisterExport(system_x86_64_dragonfly,texportlibbsd);
+  RegisterTarget(system_x86_64_dragonfly_info);
   RegisterExternalLinker(system_x86_64_OpenBSD_info,TLinkerBSD);
   RegisterImport(system_x86_64_openbsd,timportlibbsd);
   RegisterExport(system_x86_64_openbsd,texportlibbsd);
