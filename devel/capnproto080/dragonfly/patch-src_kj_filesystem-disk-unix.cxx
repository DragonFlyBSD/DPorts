--- src/kj/filesystem-disk-unix.c++.orig	2018-08-29 01:13:50 UTC
+++ src/kj/filesystem-disk-unix.c++
@@ -72,6 +72,10 @@ namespace {
 #undef SEEK_HOLE
 #endif
 
+#ifndef DTTOIF
+#define DTTOIF(dirtype) ((dirtype) << 12)
+#endif
+
 #if __BIONIC__
 // No no DTTOIF function
 #undef DT_UNKNOWN
