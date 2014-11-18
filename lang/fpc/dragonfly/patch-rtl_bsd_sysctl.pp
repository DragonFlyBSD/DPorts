--- rtl/bsd/sysctl.pp.orig	2008-09-15 20:01:17.000000000 +0000
+++ rtl/bsd/sysctl.pp
@@ -97,7 +97,7 @@ Uses Syscall;
 {$ENDIF}
 
 {$ifndef FPC_USE_LIBC}
-{$ifdef FreeBSD}
+{$if defined(FreeBSD) or defined(DragonFly)}
 CONST  syscall_nr___sysctl                    = 202;
 {$endif}
 
