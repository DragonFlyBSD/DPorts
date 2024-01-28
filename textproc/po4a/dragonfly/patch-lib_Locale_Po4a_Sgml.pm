--- lib/Locale/Po4a/Sgml.pm.orig	2022-09-04 14:43:46 UTC
+++ lib/Locale/Po4a/Sgml.pm
@@ -773,7 +773,7 @@ sub parse_file {
             while ( $origfile =~ /^(.*?)&$key(;.*$|[^-_:.A-Za-z0-9].*$|$)/s ) {
 
                 # Since we will include a new file, we
-                # must do a new round of substitutions.
+                # must do a new round of substitutions.
                 $dosubstitution = 1;
                 my ( $begin, $end ) = ( $1, $2 );
                 $end = "" unless ( defined $end );
