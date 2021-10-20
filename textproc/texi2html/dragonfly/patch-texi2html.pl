Should be ok.

--- texi2html.pl.intermediate	2019-03-18 09:22:00 UTC
+++ texi2html.pl
@@ -5614,7 +5614,7 @@ sub common_misc_commands($$$$)
     }
     elsif ($command eq 'clickstyle')
     {
-        if ($line =~ s/^\s+@([^\s\{\}\@]+)({})?\s*//)
+        if ($line =~ s/^\s+@([^\s\{\}\@]+)(\{\})?\s*//)
         {
             $Texi2HTML::THISDOC{$command} = $1;
             # FIXME warn about what remains on the line?
