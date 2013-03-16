--- mysqltuner.pl.orig	2011-04-02 12:03:32.000000000 +0000
+++ mysqltuner.pl
@@ -219,7 +219,7 @@ sub os_setup {
 		} elsif ($os =~ /Darwin/) {
 			$physical_memory = `sysctl -n hw.memsize` or memerror;
 			$swap_memory = `sysctl -n vm.swapusage | awk '{print \$3}' | sed 's/\..*\$//'` or memerror;
-		} elsif ($os =~ /NetBSD|OpenBSD/) {
+		} elsif ($os =~ /NetBSD|OpenBSD|DragonFly|FreeBSD/) {
 			$physical_memory = `sysctl -n hw.physmem` or memerror;
 			if ($physical_memory < 0) {
 				$physical_memory = `sysctl -n hw.physmem64` or memerror;
