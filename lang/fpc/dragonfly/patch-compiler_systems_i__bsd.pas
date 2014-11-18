--- compiler/systems/i_bsd.pas.orig	2012-05-13 20:28:58.000000000 +0000
+++ compiler/systems/i_bsd.pas
@@ -186,6 +186,71 @@ unit i_bsd;
           );
 
 
+       system_x86_64_dragonfly_info : tsysteminfo =
+          (
+            system       : system_x86_64_dragonfly;
+            name         : 'DragonFly for x86-64';
+            shortname    : 'DragonFly';
+            flags        : [tf_needs_symbol_size,tf_needs_dwarf_cfi,tf_library_needs_pic,tf_needs_symbol_type,
+                            tf_files_case_sensitive,tf_smartlink_library,
+                            tf_dwarf_only_local_labels
+                            { tf_pic_uses_got,tf_smartlink_sections},tf_has_winlike_resources];
+            cpu          : cpu_x86_64;
+            unit_env     : 'BSDUNITS';
+            extradefines : 'UNIX;HASUNIX;BSD';
+            exeext       : '';
+            defext       : '.def';
+            scriptext    : '.sh';
+            smartext     : '.sl';
+            unitext      : '.ppu';
+            unitlibext   : '.ppl';
+            asmext       : '.s';
+            objext       : '.o';
+            resext       : '.res';
+            resobjext    : '.or';
+            sharedlibext : '.so';
+            staticlibext : '.a';
+            staticlibprefix : 'libp';
+            sharedlibprefix : 'lib';
+            sharedClibext : '.so';
+            staticClibext : '.a';
+            staticClibprefix : 'lib';
+            sharedClibprefix : 'lib';
+            importlibprefix : 'libimp';
+            importlibext : '.a';
+            Cprefix      : '';
+            newline      : #10;
+            dirsep       : '/';
+            assem        : as_x86_64_elf64;
+            assemextern  : as_gas;
+            link         : nil;
+            linkextern   : nil;
+            ar           : ar_gnu_ar;
+            res          : res_elf;
+            dbg          : dbg_dwarf2;            //dbg_stabs;
+            script       : script_unix;
+            endian       : endian_little;
+            alignment    :
+              (
+                procalign       : 8;
+                loopalign       : 4;
+                jumpalign       : 0;
+                constalignmin   : 0;
+                constalignmax   : 8;
+                varalignmin     : 0;
+                varalignmax     : 16;
+                localalignmin   : 4;
+                localalignmax   : 16;
+                recordalignmin  : 0;
+                recordalignmax  : 16;
+                maxCrecordalign : 16
+              );
+            first_parm_offset : 16;
+            stacksize    : 256*1024;
+            abi          : abi_default;
+          );
+
+
        system_i386_netbsd_info : tsysteminfo =
           (
             system       : system_i386_NetBSD;
@@ -955,6 +1020,9 @@ initialization
    {$ifdef FreeBSD}
      set_source_info(system_x86_64_FreeBSD_info);
    {$endif}
+   {$ifdef DragonFly}
+     set_source_info(system_x86_64_DragonFly_info);
+   {$endif}
    {$ifdef OpenBSD}
      set_source_info(system_x86_64_OpenBSD_info);
    {$endif}
