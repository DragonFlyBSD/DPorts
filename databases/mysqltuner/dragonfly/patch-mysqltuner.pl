--- mysqltuner.pl.orig	2014-05-26 20:46:11.623082000 +0000
+++ mysqltuner.pl
@@ -221,7 +221,7 @@ sub os_setup {
 		} elsif ($os =~ /Darwin/) {
 			$physical_memory = `sysctl -n hw.memsize` or memerror;
 			$swap_memory = `sysctl -n vm.swapusage | awk '{print \$3}' | sed 's/\..*\$//'` or memerror;
-		} elsif ($os =~ /NetBSD|OpenBSD|FreeBSD/) {
+		} elsif ($os =~ /NetBSD|OpenBSD|DragonFly|FreeBSD/) {
 			$physical_memory = `sysctl -n hw.physmem` or memerror;
 			if ($physical_memory < 0) {
 				$physical_memory = `sysctl -n hw.physmem64` or memerror;
