#!/usr/bin/perl -w
#
# $FreeBSD: net-mgmt/net-snmp/files/test.t 340872 2014-01-24 00:14:07Z mat $

use strict;
use Test::More tests => 1;

my $cmd = 'snmpwalk -c public -v 1 localhost';

# ports/86572
my $output = `$cmd hrSWRunType`;
like($output, qr/operatingSystem/, 'hrSWRunType');
