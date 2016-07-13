--- find-systype.sh.orig	2001-02-11 23:11:45.000000000 +0200
+++ find-systype.sh
@@ -24,7 +24,7 @@ then
   unamev="`uname -v | tr /: ..`"
 
   case "$sys" in
-  bsd.os|freebsd|netbsd|openbsd)
+  bsd.os|freebsd|netbsd|openbsd|dragonfly)
     # in bsd 4.4, uname -v does not have useful info.
     # in bsd 4.4, uname -m is arch, not chip.
     oper="$sys-$unamer"
