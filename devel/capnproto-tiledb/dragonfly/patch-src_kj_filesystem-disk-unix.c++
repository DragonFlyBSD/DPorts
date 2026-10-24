--- src/kj/filesystem-disk-unix.c++.orig	2023-08-22 20:55:23 UTC
+++ src/kj/filesystem-disk-unix.c++
@@ -78,7 +78,7 @@ namespace {
 #undef SEEK_HOLE
 #endif
 
-#if __BIONIC__
+#if __BIONIC__ || __DragonFly__
 // No no DTTOIF function
 #undef DT_UNKNOWN
 #endif
