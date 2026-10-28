--- mysqltuner.pl.orig
+++ mysqltuner.pl
@@ -2858,7 +2858,7 @@
                 "sysctl -n vm.swapusage | awk '{print \$3}' | sed 's/\..*\$//'")
               or memerror;
         }
-        elsif ( $os =~ /NetBSD|OpenBSD|FreeBSD/ ) {
+        elsif ( $os =~ /NetBSD|OpenBSD|DragonFly|FreeBSD/ ) {
             $physical_memory = execute_system_command('sysctl -n hw.physmem')
               or memerror;
             if ( $physical_memory < 0 ) {
