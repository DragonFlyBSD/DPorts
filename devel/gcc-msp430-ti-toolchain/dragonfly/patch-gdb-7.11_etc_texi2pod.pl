From upstream.
--- gdb-7.11/etc/texi2pod.pl.orig	2014-06-11 16:34:40 UTC
+++ gdb-7.11/etc/texi2pod.pl
@@ -311,7 +311,7 @@ while(<$inf>) {
 	@columns = ();
 	for $column (split (/\s*\@tab\s*/, $1)) {
 	    # @strong{...} is used a @headitem work-alike
-	    $column =~ s/^\@strong{(.*)}$/$1/;
+	    $column =~ s/^\@strong\{(.*)\}$/$1/;
 	    push @columns, $column;
 	}
 	$_ = "\n=item ".join (" : ", @columns)."\n";
