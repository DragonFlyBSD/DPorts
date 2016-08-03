--- src/libuv/uv.gyp.orig	2014-10-22 20:54:31.000000000 +0300
+++ src/libuv/uv.gyp
@@ -240,7 +240,7 @@
             ],
           },
         }],
-        [ 'OS=="freebsd" or OS=="dragonflybsd"', {
+        [ 'OS=="freebsd" or OS=="dragonfly"', {
           'sources': [ 'src/unix/freebsd.c' ],
         }],
         [ 'OS=="openbsd"', {
@@ -249,12 +249,12 @@
         [ 'OS=="netbsd"', {
           'sources': [ 'src/unix/netbsd.c' ],
         }],
-        [ 'OS in "freebsd dragonflybsd openbsd netbsd".split()', {
+        [ 'OS in "freebsd dragonfly openbsd netbsd".split()', {
           'link_settings': {
             'libraries': [ '-lkvm' ],
           },
         }],
-        [ 'OS in "mac freebsd dragonflybsd openbsd netbsd".split()', {
+        [ 'OS in "mac freebsd dragonfly openbsd netbsd".split()', {
           'sources': [ 'src/unix/kqueue.c' ],
         }],
         ['library=="shared_library"', {
