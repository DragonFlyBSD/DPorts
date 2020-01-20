--- compiler/systems/t_bsd.pas.orig	2020-01-20 22:28:11 UTC
+++ compiler/systems/t_bsd.pas
@@ -142,7 +142,7 @@ begin
   LibrarySuffix:=' ';
   LdPath:=GetEnvironmentVariable('FPC_LDPATH');
   if not FileExists(LdPath,True) then
-    LdPath:='%%FPC_LDPATH%%';
+    LdPath:='/usr/bin/ld.bfd';
   LdSupportsNoResponseFile := (target_info.system in ([system_m68k_netbsd]+systems_darwin));
   with Info do
    begin
@@ -196,7 +196,7 @@ begin
       DynamicLinker:='/usr/libexec/ld.so'
      else if target_info.system in systems_netbsd then
       DynamicLinker:='/usr/libexec/ld.elf_so'
-     else if target_info.system=system_x86_64_dragonfly then
+     else if target_info.system in systems_dragonfly then
       DynamicLinker:='/libexec/ld-elf.so.2'
      else
        DynamicLinker:='';
@@ -724,9 +724,7 @@ begin
   Replace(cmdstr,'$DYNLINK',DynLinkStr);
   if (target_info.system in systems_darwin) then
     Replace(cmdstr,'$PRTOBJ',GetDarwinPrtobjName(false));
-  if target_info.system=system_x86_64_dragonfly then
-     BinStr:='/usr/libexec/binutils225/elf/ld.bfd';
-  if target_info.system in systems_freebsd then
+  if (target_info.system in systems_freebsd) or (target_info.system in systems_dragonfly) then
      BinStr:=LdPath
   else
      BinStr:=FindUtil(utilsprefix+BinStr);
