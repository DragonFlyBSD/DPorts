--- builder/MyBuilder.pm.orig	2019-09-29 10:26:21 UTC
+++ builder/MyBuilder.pm
@@ -41,6 +41,7 @@ sub ACTION_build {
         local $ENV{CFLAGS} = '-DZSTD_MULTITHREAD -DZSTD_LEGACY_MULTITHREADED_API -O3 -fPIC';
         my $make = 'make';
         $make = 'gmake' if $^O =~ /bsd$/ && $^O !~ /gnukfreebsd$/;
+        $make = 'gmake' if $^O =~ /dragonfly/;
         $self->do_system($make => '-C', $LIBZSTD_DIR, 'libzstd.a');
     }
     $self->SUPER::ACTION_build();
