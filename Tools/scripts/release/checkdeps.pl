#!/usr/bin/perl
# $FreeBSD: Tools/scripts/release/checkdeps.pl 300895 2012-07-14 12:56:14Z beat $

die "$0 <pkgdir> <indexfile>\n" if ($#ARGV != 1);

$pkg_dir = shift(@ARGV);

while (<>) {
  chomp;
  @f = split(/\|/);
  @deps = split(/\s+/, $f[8]);
  foreach (@deps) {
    print "$_\n" if (! -f "$pkg_dir/$_.tgz");
  }
}
