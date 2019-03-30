--- lib/MP3/Tag.pm.orig	2016-09-28 09:42:55 UTC
+++ lib/MP3/Tag.pm
@@ -3077,7 +3077,7 @@ sub format_time {
   local $self->{ms} = int($time * 1000 + 0.5) if defined $time;
   my ($out, %have, $c) = '';
   for my $f (@_) {
-    $have{$+}++ if $f =~ /^\??({([^{}]+)}|.)/;
+    $have{$+}++ if $f =~ /^\??(\{([^{}]+)\}|.)/;
   }
   for my $f (@_) {
     if (!$c++ and $f =~ /^=>(\w)$/) {
@@ -3089,7 +3089,7 @@ sub format_time {
     }
     my $ff = $f;		# Modifiable
     my $opt = ($ff =~ s/^\?//);
-    $ff =~ s/^({[^{}]+}|\w)// or die "unexpected time format: <<$f>>";
+    $ff =~ s/^(\{[^{}]+\}|\w)// or die "unexpected time format: <<$f>>";
     my ($what, $format) = ($1, '');
     if ($opt) {
       if ($what eq 'H') {
