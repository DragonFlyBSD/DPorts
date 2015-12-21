--- ide/compileroptions.pp.orig	2015-05-05 21:06:31.000000000 +0300
+++ ide/compileroptions.pp
@@ -719,7 +719,7 @@ function TargetNeedsFPCOptionCG(TargetOS
 begin
   Result:= (TargetCPU='x86_64')
     and ((TargetOS='linux') or (TargetOS='freebsd') or (TargetOS='netbsd')
-      or (TargetOS='openbsd') or (TargetOS='solaris'));
+      or (TargetOS='openbsd') or (TargetOS='dragonfly') or (TargetOS='solaris'));
 end;
 
 procedure GatherInheritedOptions(AddOptionsList: TFPList;
