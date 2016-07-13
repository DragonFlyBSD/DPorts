--- find-systype.sh.orig	2016-07-12 15:15:16.000000000 +0300
+++ find-systype.sh
@@ -24,7 +24,7 @@ then
   unamev="`uname -v | tr /: ..`"
 
   case "$sys" in
-  bsd.os|freebsd|netbsd|openbsd)
+  bsd.os|freebsd|netbsd|openbsd|dragonfly)
     # in bsd 4.4, uname -v does not have useful info.
     # in bsd 4.4, uname -m is arch, not chip.
     oper="$sys-$unamer"
