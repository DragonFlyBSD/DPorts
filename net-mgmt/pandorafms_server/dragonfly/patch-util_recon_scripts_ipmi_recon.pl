--- util/recon_scripts/ipmi-recon.pl.bak	2015-01-26 16:49:41.266535202 +0200
+++ util/recon_scripts/ipmi-recon.pl
@@ -30,7 +30,7 @@ my $pkg_timeout = 3; #Pkg ping timeout w
 my $OSNAME = $^O;
 my $pandora_conf;
 
-if ($OSNAME eq "freebsd") {
+if ($OSNAME =~ /^(freebsd|dragonfly)$/) {
 	$pandora_conf = "/usr/local/etc/pandora/pandora_server.conf";
 } else {
 	$pandora_conf = "/etc/pandora/pandora_server.conf";
