--- odk/config/configure.pl.orig	2021-09-08 17:53:20 utc
+++ odk/config/configure.pl
@@ -46,7 +46,7 @@ $main::OFFICE_HOME = "";
 $main::OO_SDK_MAKE_HOME = "";
 $main::makeName = "make";
 if ( $main::operatingSystem =~ m/solaris/ ||
-     $main::operatingSystem =~ m/freebsd/ )
+     $main::operatingSystem =~ m/freebsd/ || $main::operatingSystem =~ m/dragonfly/ )
 {
     $main::makeName = "gmake";
 }
