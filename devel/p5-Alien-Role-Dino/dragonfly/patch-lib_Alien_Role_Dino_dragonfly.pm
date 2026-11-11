--- lib/Alien/Role/Dino/dragonfly.pm.orig
+++ lib/Alien/Role/Dino/dragonfly.pm
@@ -0,0 +1,43 @@
+package Alien::Role::Dino::dragonfly;
+
+use strict;
+use warnings;
+use 5.008001;
+use Role::Tiny;
+
+requires 'libs';
+requires 'rpath';
+
+around libs => sub {
+  my($orig, $self) = @_;
+  join(' ', (map { "-Wl,-rpath,$_" } $self->rpath), $orig->($self));
+};
+
+1;
+
+__END__
+
+=pod
+
+=encoding UTF-8
+
+=head1 NAME
+
+Alien::Role::Dino::dragonfly
+
+=head1 VERSION
+
+version 0.08
+
+=head1 AUTHOR
+
+Graham Ollis <plicease@cpan.org>
+
+=head1 COPYRIGHT AND LICENSE
+
+This software is copyright (c) 2017-2022 by Graham Ollis.
+
+This is free software; you can redistribute it and/or modify it under
+the same terms as the Perl 5 programming language system itself.
+
+=cut
