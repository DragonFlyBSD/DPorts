--- compiler/ogelf.pas.orig	2012-04-22 19:47:06.000000000 +0000
+++ compiler/ogelf.pas
@@ -1286,6 +1286,7 @@ implementation
             asmbin : '';
             asmcmd : '';
             supported_targets : [system_x86_64_linux,system_x86_64_freebsd,
+                                 system_x86_64_dragonfly,
                                  system_x86_64_openbsd,system_x86_64_netbsd];
             flags : [af_outputbinary,af_smartlink_sections,af_supports_dwarf];
             labelprefix : '.L';
