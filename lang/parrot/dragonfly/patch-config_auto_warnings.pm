--- config/auto/warnings.pm.orig	2012-12-14 02:29:46.000000000 +0000
+++ config/auto/warnings.pm
@@ -119,7 +119,6 @@ sub _init {
     my @gcc_or_gpp_basic = qw(
         -falign-functions=16
         -funit-at-a-time
-        -fexcess-precision=standard
         -fpermissive
         -maccumulate-outgoing-args
         -Wall
@@ -138,7 +137,6 @@ sub _init {
         -Winit-self
         -Winline
         -Winvalid-pch
-        -Wjump-misses-init
         -Wlogical-op
         -Werror=missing-braces
         -Wmissing-declarations
@@ -158,7 +156,6 @@ sub _init {
         -Wno-unused
         -Wvariadic-macros
         -Wwrite-strings
-        -Wstack-usage=500
     );
 
     # gcc-only warnings that would break g++
