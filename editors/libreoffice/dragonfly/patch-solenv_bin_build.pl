--- solenv/bin/build.pl.orig	2013-05-02 15:55:29.000000000 +0000
+++ solenv/bin/build.pl
@@ -1895,7 +1895,7 @@ sub run_job {
         {
             return 1 if (! $path =~ /prj$/ );
             my $gbuild_flags = '-j' . $ENV{PARALLELISM};
-            my $gbuild_target = 'all slowcheck';
+            my $gbuild_target = 'all';
             if ($registered_name =~ /tail_build\/prj$/ )
             {
                 $gbuild_target = $ENV{gb_TAILBUILDTARGET};
