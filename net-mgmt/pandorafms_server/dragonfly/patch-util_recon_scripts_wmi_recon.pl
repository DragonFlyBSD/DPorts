--- util/recon_scripts/wmi-recon.pl.bak	2015-01-26 16:49:41.266535202 +0200
+++ util/recon_scripts/wmi-recon.pl
@@ -21,7 +21,7 @@ use PandoraFMS::NmapParser;
 my $OSNAME = $^O;
 my %CONF;
 
-if ($OSNAME eq "freebsd") {
+if ($OSNAME =~ /^(freebsd|dragonfly)$/) {
 	%CONF = ('quiet' => 0,
 			'verbosity' => 1,
 			'daemon' => 0,
