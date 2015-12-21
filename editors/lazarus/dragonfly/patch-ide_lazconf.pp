--- ide/lazconf.pp.orig	2014-10-18 23:59:47.000000000 +0300
+++ ide/lazconf.pp
@@ -398,6 +398,7 @@ begin
     Result:='.dylib'
   else if (CompareText(TargetOS, 'linux') = 0)
   or (CompareText(TargetOS, 'android') = 0)
+  or (CompareText(TargetOS, 'dragonfly') = 0)
   or (CompareText(TargetOS, 'freebsd') = 0)
   or (CompareText(TargetOS, 'openbsd') = 0)
   or (CompareText(TargetOS, 'netbsd') = 0)
@@ -437,6 +438,7 @@ begin
     Result:=ExtractFilePath(Result)+StdPrefix+ExtractFileName(Result);
   // lowercase
   if (CompareText(TargetOS,'linux')=0)
+  or (CompareText(TargetOS,'dragonfly')=0)
   or (CompareText(TargetOS,'freebsd')=0)
   or (CompareText(TargetOS,'netbsd')=0)
   or (CompareText(TargetOS,'openbsd')=0)
