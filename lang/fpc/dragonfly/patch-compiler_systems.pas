--- compiler/systems.pas.orig	2012-04-22 19:47:06.000000000 +0000
+++ compiler/systems.pas
@@ -214,6 +214,7 @@ interface
        systems_linux = [system_i386_linux,system_x86_64_linux,system_powerpc_linux,system_powerpc64_linux,
                        system_arm_linux,system_sparc_linux,system_alpha_linux,system_m68k_linux,
                        system_x86_6432_linux,system_mips_linux,system_mipsel_linux];
+       systems_dragonfly = [system_x86_64_dragonfly];
        systems_freebsd = [system_i386_freebsd,
                           system_x86_64_freebsd];
        systems_netbsd  = [system_i386_netbsd,
@@ -224,7 +225,7 @@ interface
                           system_m68k_openbsd,
                           system_x86_64_openbsd];
 
-       systems_bsd = systems_freebsd + systems_netbsd + systems_openbsd;
+       systems_bsd = systems_dragonfly + systems_freebsd + systems_netbsd + systems_openbsd;
 
        { all real windows systems, no cripple ones like wince, wdosx et. al. }
        systems_windows = [system_i386_win32,system_x86_64_win64,system_ia64_win64];
@@ -308,6 +309,7 @@ interface
         system_x86_64_darwin,
         system_x86_64_win64,
         system_x86_64_linux,
+        system_x86_64_dragonfly,
         system_x86_64_freebsd,
         system_x86_64_solaris];
 
@@ -369,20 +371,20 @@ interface
 
     procedure InitSystems;
 
-    {$ifdef FreeBSD}
+    {$if defined(FreeBSD) or defined(DragonFly)}
         function GetOSRelDate:Longint;
     {$endif}
 
 implementation
 
     uses
-      cutils{$ifdef FreeBSD},SysCtl,BaseUnix{$endif};
+      cutils{$if defined(FreeBSD) or defined(DragonFly)},SysCtl,BaseUnix{$endif};
 
 {****************************************************************************
            OS runtime version detection utility routine
 ****************************************************************************}
 
-{$ifdef FreeBSD}
+{$if defined(FreeBSD) or defined(DragonFly)}
 function GetOSRelDate:Longint;
 
 var
@@ -752,6 +754,10 @@ begin
     default_target(system_x86_64_freebsd);
     {$define default_target_set}
    {$endif}
+   {$ifdef dragonfly}
+    default_target(system_x86_64_dragonfly);
+    {$define default_target_set}
+   {$endif}
    {$ifdef openbsd}
     default_target(system_x86_64_openbsd);
     {$define default_target_set}
