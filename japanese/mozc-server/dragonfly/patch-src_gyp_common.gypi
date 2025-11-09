--- src/gyp/common.gypi.orig	Fri Aug 14 17:09:18 2020
+++ src/gyp/common.gypi	Sun Nov
@@ -231,7 +231,6 @@
           }],
           ['compiler_target=="gcc"', {
             'cflags_cc': [
-              '-std=gnu++11',
               '<@(cflags_cc)',
             ],
           }],
@@ -254,7 +253,6 @@
           }],
           ['compiler_host=="gcc"', {
             'cflags_cc': [
-              '-std=gnu++11',
               '<@(cflags_cc)',
             ],
           }],
@@ -463,8 +461,8 @@
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
