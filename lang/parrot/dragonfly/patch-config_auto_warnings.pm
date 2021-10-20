--- config/auto/warnings.pm.orig	2015-01-23 10:58:18 UTC
+++ config/auto/warnings.pm
@@ -120,7 +120,6 @@ sub _init {
         -fpermissive
         -falign-functions=16
         -funit-at-a-time
-        -fexcess-precision=standard
         -maccumulate-outgoing-args
         -Wall
         -Wextra
@@ -135,7 +134,6 @@ sub _init {
         -Winit-self
         -Winline
         -Winvalid-pch
-        -Wjump-misses-init
         -Wlogical-op
         -Werror=missing-braces
         -Werror=missing-declarations
@@ -155,7 +153,6 @@ sub _init {
         -Wno-unused
         -Wvariadic-macros
         -Wwrite-strings
-        -Wstack-usage=500
     );
 
     # gcc-only warnings that would break g++
