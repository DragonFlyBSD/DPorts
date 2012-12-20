
$FreeBSD: ports/mail/grepmail/files/patch-Makefile.PL,v 1.2 2012/11/17 05:59:03 svnexp Exp $

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
