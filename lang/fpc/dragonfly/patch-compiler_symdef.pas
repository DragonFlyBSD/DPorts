--- compiler/symdef.pas.orig	2012-04-22 19:47:06.000000000 +0000
+++ compiler/symdef.pas
@@ -1976,6 +1976,7 @@ implementation
            sc80real:
              if target_info.system in [system_i386_darwin,system_i386_iphonesim,system_x86_64_darwin,
                   system_x86_64_linux,system_x86_64_freebsd,
+                  system_x86_64_dragonfly,
                   system_x86_64_openbsd,system_x86_64_netbsd,
                   system_x86_64_solaris,system_x86_64_embedded] then
                savesize:=16
