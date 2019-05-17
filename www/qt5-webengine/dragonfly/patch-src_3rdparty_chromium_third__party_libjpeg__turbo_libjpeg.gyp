--- src/3rdparty/chromium/third_party/libjpeg_turbo/libjpeg.gyp.orig	2019-03-07 09:23:57.000000000 +0000
+++ src/3rdparty/chromium/third_party/libjpeg_turbo/libjpeg.gyp
@@ -244,7 +244,7 @@
             ],
           },
         }],
-        [ 'OS=="linux" or OS=="freebsd" or (OS=="android" and (target_arch=="ia32" or target_arch=="x64"))', {
+        [ 'OS=="linux" or OS=="freebsd" or OS=="dragonfly" or (OS=="android" and (target_arch=="ia32" or target_arch=="x64"))', {
           'conditions': [
             [ 'use_system_yasm==0', {
               'dependencies': [
