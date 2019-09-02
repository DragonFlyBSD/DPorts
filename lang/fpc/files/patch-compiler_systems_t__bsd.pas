--- compiler/systems/t_bsd.pas	2014-12-07 20:27:02 UTC
+++ compiler/systems/t_bsd.pas
@@ -192,6 +192,8 @@
       DynamicLinker:='/usr/libexec/ld.so'
      else if target_info.system in systems_netbsd then
       DynamicLinker:='/usr/libexec/ld.elf_so'
+     else if target_info.system in systems_dragonfly then
+      DynamicLinker:='/libexec/ld-elf.so.2'
      else
        DynamicLinker:='';
    end;
@@ -718,7 +720,12 @@
   Replace(cmdstr,'$DYNLINK',DynLinkStr);
   if (target_info.system in systems_darwin) then
     Replace(cmdstr,'$PRTOBJ',GetDarwinPrtobjName(false));
-  BinStr:=FindUtil(utilsprefix+BinStr);
+  if target_info.system in systems_dragonfly then
+     BinStr:='/usr/bin/ld.bfd'
+  else if target_info.system in systems_freebsd then
+     BinStr:='%%LDPATH%%'
+  else
+     BinStr:=FindUtil(utilsprefix+BinStr);
 
   { create dsym file? }
   extdbgbinstr:='';
