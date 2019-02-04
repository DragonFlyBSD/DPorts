--- src/gyp/common.gypi.orig	2019-02-02 18:44:15 UTC
+++ src/gyp/common.gypi
@@ -461,8 +461,8 @@
     ['target_platform=="Linux"', {
       'make_global_settings': [
         ['AR', '<!(which ar)'],
-        ['CC', '<!(which clang)'],
-        ['CXX', '<!(which clang++)'],
+        ['CC', '<!(which cc)'],
+        ['CXX', '<!(which c++)'],
         ['LD', '<!(which ld)'],
         ['NM', '<!(which nm)'],
         ['READELF', '<!(which readelf)'],
