--- Sudoscript.pm.orig	2004-11-22 18:38:59.000000000 +0200
+++ Sudoscript.pm
@@ -127,7 +127,7 @@ sub _init {
     $script="script -f"; # flush channels on linux (gnu script)
     $PS="ps auxww";
     $initscr="/etc/init.d/sudoscriptd";
-  } elsif($^O eq 'freebsd' || $^O eq 'openbsd') {
+  } elsif($^O eq 'freebsd' || $^O eq 'openbsd' ||  $^O eq 'dragonfly') {
     $PS="ps aux";
     $initscr="/usr/local/etc/rc.d/sudoscriptd.sh";
     $script="script";
