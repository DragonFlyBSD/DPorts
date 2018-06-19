--- src/3rdparty/chromium/v8/gypfiles/toolchain.gypi.orig	2018-04-10 14:05:55.000000000 +0000
+++ src/3rdparty/chromium/v8/gypfiles/toolchain.gypi
@@ -1090,7 +1090,7 @@
           'V8_ANDROID_LOG_STDOUT',
         ],
       }],
-      ['OS=="linux" or OS=="freebsd" or OS=="openbsd" or OS=="solaris" \
+      ['OS=="linux" or OS=="freebsd" or OS=="dragonfly" or OS=="openbsd" or OS=="solaris" \
          or OS=="netbsd" or OS=="qnx" or OS=="aix"', {
         'conditions': [
           [ 'v8_no_strict_aliasing==1', {
@@ -1101,7 +1101,7 @@
       ['OS=="solaris"', {
         'defines': [ '__C99FEATURES__=1' ],  # isinf() etc.
       }],
-      ['OS=="freebsd" or OS=="openbsd"', {
+      ['OS=="freebsd" or OS=="openbsd" or OS=="dragonfly"', {
         'cflags': [ '-I/usr/local/include' ],
       }],
       ['OS=="netbsd"', {
@@ -1147,7 +1147,7 @@
           'v8_enable_slow_dchecks%': 1,
         },
         'conditions': [
-          ['OS=="linux" or OS=="freebsd" or OS=="openbsd" or OS=="netbsd" or \
+          ['OS=="linux" or OS=="freebsd" or OS=="dragonfly" or OS=="openbsd" or OS=="netbsd" or \
             OS=="qnx" or OS=="aix"', {
             'cflags!': [
               '-O3',
@@ -1201,7 +1201,7 @@
           'v8_enable_slow_dchecks%': 0,
         },
         'conditions': [
-          ['OS=="linux" or OS=="freebsd" or OS=="openbsd" or OS=="netbsd" or \
+          ['OS=="linux" or OS=="freebsd" or OS=="dragonfly" or OS=="openbsd" or OS=="netbsd" or \
             OS=="qnx" or OS=="aix"', {
             'cflags!': [
               '-O0',
@@ -1249,7 +1249,7 @@
           'TRACE_MAPS'
         ],
         'conditions': [
-          ['OS=="linux" or OS=="freebsd" or OS=="openbsd" or OS=="netbsd" or \
+          ['OS=="linux" or OS=="freebsd" or OS=="dragonfly" or OS=="openbsd" or OS=="netbsd" or \
             OS=="qnx" or OS=="aix"', {
             'cflags': [ '-Woverloaded-virtual', '<(wno_array_bounds)', ],
           }],
@@ -1320,7 +1320,7 @@
           'v8_enable_slow_dchecks%': 0,
         },
         'conditions': [
-          ['OS=="linux" or OS=="freebsd" or OS=="openbsd" or OS=="netbsd" \
+          ['OS=="linux" or OS=="freebsd" or OS=="dragonfly" or OS=="openbsd" or OS=="netbsd" \
             or OS=="aix"', {
             'cflags!': [
               '-Os',
