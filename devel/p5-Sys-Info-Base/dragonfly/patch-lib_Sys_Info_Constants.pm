--- lib/Sys/Info/Constants.pm.orig	2015-01-21 03:36:16.000000000 +0200
+++ lib/Sys/Info/Constants.pm
@@ -15,7 +15,7 @@ BEGIN {
             linux    => 'Linux',
             darwin   => 'OSX',
         );
-        $OS{$_} = 'BSD' for qw( freebsd openbsd netbsd );
+        $OS{$_} = 'BSD' for qw( dragonfly freebsd openbsd netbsd );
         my $ID = $OS{ $^O } || 'Unknown';
         *OSID = sub () { "$ID" }
     }
