--- build/common.gypi.orig	2013-05-01 12:56:30 UTC
+++ build/common.gypi
@@ -92,7 +92,7 @@
 
     'v8_use_snapshot%': 'true',
     'host_os%': '<(OS)',
-    'werror%': '-Werror',
+    'werror%': '',
 
     # With post mortem support enabled, metadata is embedded into libv8 that
     # describes various parameters of the VM for use by debuggers. See
