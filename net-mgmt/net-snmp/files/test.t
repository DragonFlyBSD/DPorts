#!/usr/bin/perl -w
#
# $FreeBSD: net-mgmt/net-snmp/files/test.t 300897 2012-07-14 14:29:18Z beat $

use strict;
use Test::More tests => 1;

my $cmd = 'snmpwalk -c public -v 1 localhost';

# ports/86572
my $output = `$cmd hrSWRunType`;
like($output, qr/operatingSystem/, 'hrSWRunType');
