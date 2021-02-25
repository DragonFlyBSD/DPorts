Prevent using $col == 0, can happen in builders environment depending
if (-t STDERR || -t STDOUT)

--- lib/Locale/Po4a/Common.pm.orig	2021-02-23 15:43:07.714563000 +0100
+++ lib/Locale/Po4a/Common.pm	2021-02-23 15:47:52.826001000 +0100
@@ -67,7 +67,7 @@
             # This can happen if Term::ReadKey is not available
             # or this is a terminal-less build or such strange condition.
         }
-        $col = 76 if ( !defined $col );
+        $col=76 if (!defined $col || $col <= 0);
 
         eval ' use Text::WrapI18N qw($columns);
                $columns = $col;
