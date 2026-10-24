--- build/modules/unified/modulemap_config.py.orig	2026-06-23 23:37:18 UTC
+++ build/modules/unified/modulemap_config.py
@@ -57,7 +57,7 @@ def headers(os):
 
 
 def headers(os):
-  is_linux = os == 'linux'
+  is_linux = os == 'linux' or os == 'openbsd' or os == 'freebsd'
   is_android = os == 'android'
   is_ios = os == 'ios'
   is_mac = os == 'mac'
