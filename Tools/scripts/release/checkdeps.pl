#!/usr/local/bin/perl
# $FreeBSD: Tools/scripts/release/checkdeps.pl 340851 2014-01-23 19:55:14Z mat $

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
