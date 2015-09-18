--- util/recon_scripts/snmp-recon.pl.bak	2015-01-26 16:49:41.266535202 +0200
+++ util/recon_scripts/snmp-recon.pl
@@ -31,7 +31,7 @@ my %ARP_CACHE;
 my $OSNAME = $^O;
 my %CONF;
 
-if ($OSNAME eq "freebsd") {
+if ($OSNAME =~ /^(freebsd|dragonfly)$/) {
 	%CONF = (
 		'nmap' => '/usr/local/bin/nmap',
 		'pandora_path' => '/usr/local/etc/pandora/pandora_server.conf',
