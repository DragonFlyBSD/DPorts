From upstream.
--- binutils-2.26/etc/texi2pod.pl.orig	2013-11-04 15:33:37 UTC
+++ binutils-2.26/etc/texi2pod.pl
@@ -311,7 +311,7 @@ while(<$inf>) {
 	@columns = ();
 	for $column (split (/\s*\@tab\s*/, $1)) {
 	    # @strong{...} is used a @headitem work-alike
-	    $column =~ s/^\@strong{(.*)}$/$1/;
+	    $column =~ s/^\@strong\{(.*)\}$/$1/;
 	    push @columns, $column;
 	}
 	$_ = "\n=item ".join (" : ", @columns)."\n";
