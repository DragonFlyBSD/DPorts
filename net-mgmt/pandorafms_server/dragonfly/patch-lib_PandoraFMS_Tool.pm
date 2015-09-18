--- lib/PandoraFMS/Tools.pm.orig	2015-02-23 01:36:32.469267827 +0200
+++ lib/PandoraFMS/Tools.pm
@@ -774,7 +774,7 @@ sub load_average {
 
 	my $OSNAME = $^O;
 
-	if ($OSNAME eq "freebsd"){
+	if ($OSNAME =~ /^(freebsd|dragonfly)$/){
 		$load_average = ((split(/\s+/, `/sbin/sysctl -n vm.loadavg`))[1]);
 	}
 	# by default LINUX calls
@@ -789,7 +789,7 @@ sub free_mem {
 
 	my $OSNAME = $^O;
 
-	if ($OSNAME eq "freebsd"){
+	if ($OSNAME =~ /^(freebsd|dragonfly)$/){
 		my ($pages_free, $page_size) = `/sbin/sysctl -n vm.stats.vm.v_page_size vm.stats.vm.v_free_count`;
 		# in kilobytes
 		$free_mem = $pages_free * $page_size / 1024;
@@ -887,7 +887,7 @@ sub pandora_ping ($$$$) {
 		return 0;
 	}
 	
-	elsif ($OSNAME eq "freebsd"){
+	elsif ($OSNAME =~ /^(freebsd|dragonfly)$/){
 		my $ping_command = "ping -t $timeout";
 		
 		if ($host =~ /\d+:|:\d+/ ) {
@@ -1009,7 +1009,7 @@ sub pandora_ping_latency ($$$$) {
 		return $2;
 	}
 	
-	elsif ($OSNAME eq "freebsd"){
+	elsif ($OSNAME =~ /^(freebsd|dragonfly)$/){
 		my $ping_command = "ping -t $timeout";
 		
 		if ($host =~ /\d+:|:\d+/ ) {
