Prevent using $col == 0, can happen in builders environment depending
if (-t STDERR || -t STDOUT)

--- lib/Locale/Po4a/Common.pm.orig	2017-03-28 21:11:26 UTC
+++ lib/Locale/Po4a/Common.pm
@@ -68,7 +68,7 @@ sub import {
             # This can happen if Term::ReadKey is not available
             # or this is a terminal-less build or such strange condition.
         }
-        $col=76 if (!defined $col);
+        $col=76 if (!defined $col || $col <= 0);
 
         eval ' use Text::WrapI18N qw($columns);
                $columns = $col;
