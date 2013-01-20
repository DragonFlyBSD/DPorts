#!/usr/bin/perl
#
# $FreeBSD: ports/textproc/p5-XML-Parser/files/check_nfs.pl,v 1.1 2013/01/12 03:22:58 svnexp Exp $

use strict;
use warnings;
use File::Temp qw(tempfile);

my ($fh, $fn) = tempfile("check-XXXXXX", SUFFIX => '.tmp', TMPDIR => 1, UNLINK => 1);
#print "$fn\n";
