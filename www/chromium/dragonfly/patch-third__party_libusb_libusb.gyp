--- third_party/libusb/libusb.gyp.orig	2014-06-06 19:55:37.398450000 +0000
+++ third_party/libusb/libusb.gyp
@@ -93,7 +93,7 @@
           ],
           'msvs_disabled_warnings': [ 4267 ],
         }],
-        ['OS == "freebsd"', {
+        ['OS == "freebsd" or OS == "dragonfly"', {
           'type': 'none',
           'sources/': [
             ['exclude', '^src/libusb/'],
