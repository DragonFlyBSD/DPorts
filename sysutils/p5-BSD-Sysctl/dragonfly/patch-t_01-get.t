--- t/01-get.t.orig	2009-09-14 23:03:54.000000000 +0300
+++ t/01-get.t
@@ -4,7 +4,7 @@
 # Copyright (C) 2006, 2009 David Landgren
 
 use strict;
-use Test::More tests => 23;
+use Test::More;
 
 use BSD::Sysctl qw(sysctl sysctl_exists);
 
@@ -47,7 +47,7 @@ ok(BSD::Sysctl::_mib_exists('kern.maxpro
     is_deeply(\@oid, [1, 30, 1], '... oid 1.30.1');
 }
 
-{
+if ($^O eq "freebsd") {
     my $sysctl_info = BSD::Sysctl::_mib_info('kern.geom.confxml');
     ok($sysctl_info, 'mib lookup kern.geom.confxml');
     my ($fmt, @oid) = unpack( 'i i/i', $sysctl_info );
@@ -82,5 +82,11 @@ ok(!sysctl_exists('kern.maxbananas'), 'k
     cmp_ok($nr_files, '>', 0, "got the number of open files again (now $nr_files)");
 }
 
-is(scalar(keys %BSD::Sysctl::MIB_CACHE), 7, 'cached mib count')
+my $cached_count = 6;
+$cached_count += 1 if ($^O eq "freebsd");
+is(scalar(keys %BSD::Sysctl::MIB_CACHE), $cached_count, 'cached mib count')
     or do { diag("cached: [$_]") for sort keys %BSD::Sysctl::MIB_CACHE };
+
+my $tests_expected = 19;
+$tests_expected += 4 if ($^O eq "freebsd");
+done_testing( $tests_expected );
