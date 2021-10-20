--- mysqltuner.pl.orig	2015-11-30 14:31:48 UTC
+++ mysqltuner.pl
@@ -794,7 +794,7 @@ sub os_setup {
               `sysctl -n vm.swapusage | awk '{print \$3}' | sed 's/\..*\$//'`
               or memerror;
         }
-        elsif ( $os =~ /NetBSD|OpenBSD|FreeBSD/ ) {
+        elsif ( $os =~ /NetBSD|OpenBSD|DragonFly|FreeBSD/ ) {
             $physical_memory = `sysctl -n hw.physmem` or memerror;
             if ( $physical_memory < 0 ) {
                 $physical_memory = `sysctl -n hw.physmem64` or memerror;
