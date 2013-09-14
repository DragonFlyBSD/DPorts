#!/usr/bin/perl
#
# $FreeBSD: textproc/p5-XML-Parser/files/check_nfs.pl 310260 2013-01-12 03:06:37Z kuriyama $

use strict;
use warnings;
use File::Temp qw(tempfile);

my ($fh, $fn) = tempfile("check-XXXXXX", SUFFIX => '.tmp', TMPDIR => 1, UNLINK => 1);
#print "$fn\n";
