--- lib/Sys/Info/Driver/BSD/OS.pm.orig	2011-09-12 04:18:35.000000000 +0300
+++ lib/Sys/Info/Driver/BSD/OS.pm
@@ -15,6 +15,7 @@ my %OSVERSION;
 
 my $MANUFACTURER = {
     # taken from Wikipedia
+    dragonfly => 'The DragonFly Project',
     freebsd => 'The FreeBSD Project',
     openbsd => 'The OpenBSD Project',
     netbsd  => 'The NetBSD Foundation',
@@ -68,8 +69,8 @@ sub meta {
 
     $info{physical_memory_total}     = $physmem;
     $info{physical_memory_available} = $physmem - $usermem;
-    $info{page_file_total}           = $swap{size};
-    $info{page_file_available}       = $swap{size} - $swap{used};
+    $info{page_file_total}           = %swap ? $swap{size} : undef;
+    $info{page_file_available}       = %swap ? $swap{size} - $swap{used} : undef;
 
     # windows specific
     $info{windows_dir}               = undef;
@@ -172,7 +173,7 @@ sub _populate_osversion {
     my($sysname, $nodename, $release, $version, $machine) = POSIX::uname();
 
     my(undef, $raw)  = split m{\#}xms, $version;
-    my($date, undef) = split m{ \s+ \S+ \z }xms, $raw;
+    my($date, undef) = $raw ? split m{ \s+ \S+ \z }xms, $raw : (undef, undef);
     my $build_date = $date ? $self->date2time( $date ) : undef;
     my $build      = $date;
     my $edition    = $self->_probe_edition( $sysname );
