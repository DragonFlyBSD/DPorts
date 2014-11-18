--- compiler/expunix.pas.orig	2009-12-10 12:47:40.000000000 +0000
+++ compiler/expunix.pas
@@ -154,7 +154,7 @@ begin
            current_asmdata.asmlists[al_procedures].concat(Tai_symbol.Createname_global(hp2.name^,AT_FUNCTION,0));
            if (cs_create_pic in current_settings.moduleswitches) and
              { other targets need to be checked how it works }
-             (target_info.system in [system_i386_freebsd,system_x86_64_freebsd,system_x86_64_linux,system_i386_linux,system_x86_64_solaris,system_i386_solaris]) then
+             (target_info.system in [system_x86_64_dragonfly,system_i386_freebsd,system_x86_64_freebsd,system_x86_64_linux,system_i386_linux,system_x86_64_solaris,system_i386_solaris]) then
              begin
 {$ifdef x86}
                sym:=current_asmdata.RefAsmSymbol(pd.mangledname);
