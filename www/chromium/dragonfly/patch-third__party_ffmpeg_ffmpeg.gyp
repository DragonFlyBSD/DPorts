--- third_party/ffmpeg/ffmpeg.gyp.orig	2016-07-23 10:20:59.227545000 +0200
+++ third_party/ffmpeg/ffmpeg.gyp	2016-07-23 10:21:11.097131000 +0200
@@ -188,8 +188,6 @@
           ],
           'defines': [
             'HAVE_AV_CONFIG_H',
-            '_POSIX_C_SOURCE=200112',
-            '_XOPEN_SOURCE=600',
             'PIC',
             # Disable deprecated features that generate spammy warnings.
             # BUILD.gn & media/ffmpeg/ffmpeg_common.h must be kept in sync.
