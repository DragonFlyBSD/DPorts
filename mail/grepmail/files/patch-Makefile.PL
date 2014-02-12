
$FreeBSD: head/mail/grepmail/files/patch-Makefile.PL 340725 2014-01-22 17:40:44Z mat $

--- Makefile.PL.orig
+++ Makefile.PL
@@ -44,10 +44,6 @@
                       -default => 1,
                       recommends( 'Date::Manip' => 0 ),
                     ],
-                    'Speed Tests' => [
-                      -default => 0,
-                      recommends( 'Benchmark::Timer' => '0.7100' ),
-                    ],
                   );
 
 include           ('ExtUtils/AutoInstall.pm');
