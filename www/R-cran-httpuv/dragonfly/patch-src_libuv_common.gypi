--- src/libuv/common.gypi.orig	2014-10-22 20:54:31.000000000 +0300
+++ src/libuv/common.gypi
@@ -130,7 +130,7 @@
           }]
         ]
       }],
-      [ 'OS=="linux" or OS=="freebsd" or OS=="openbsd" or OS=="solaris"', {
+      [ 'OS=="linux" or OS=="dragonfly" or OS=="freebsd" or OS=="openbsd" or OS=="solaris"', {
         'cflags': [ '-Wall' ],
         'cflags_cc': [ '-fno-rtti', '-fno-exceptions' ],
         'target_conditions': [
