--- compiler/x86/agx86att.pas.orig	2012-04-22 19:47:06.000000000 +0000
+++ compiler/x86/agx86att.pas
@@ -334,6 +334,7 @@ interface
             asmbin : 'as';
             asmcmd : '--64 -o $OBJ $ASM';
             supported_targets : [system_x86_64_linux,system_x86_64_freebsd,
+                                 system_x86_64_dragonfly,
                                  system_x86_64_win64,system_x86_64_embedded,
                                  system_x86_64_openbsd,system_x86_64_netbsd];
             flags : [af_allowdirect,af_needar,af_smartlink_sections,af_supports_dwarf];
