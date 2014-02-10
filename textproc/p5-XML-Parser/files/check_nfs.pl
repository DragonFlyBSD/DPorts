#!/usr/bin/perl
#
# $FreeBSD: head/textproc/p5-XML-Parser/files/check_nfs.pl 340872 2014-01-24 00:14:07Z mat $

use strict;
use warnings;
use File::Temp qw(tempfile);

my ($fh, $fn) = tempfile("check-XXXXXX", SUFFIX => '.tmp', TMPDIR => 1, UNLINK => 1);
#print "$fn\n";
