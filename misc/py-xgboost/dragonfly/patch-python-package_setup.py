--- setup.py.orig	2020-07-01 09:05:58 UTC
+++ setup.py
@@ -36,7 +36,7 @@ BUILD_TEMP_DIR = None
 
 def lib_name():
     '''Return platform dependent shared object name.'''
-    if system() == 'Linux' or system().upper().endswith('BSD'):
+    if system() == 'Linux' or system().upper().endswith('BSD') or system().lower().startswith('dragonfly'):
         name = 'libxgboost.so'
     elif system() == 'Darwin':
         name = 'libxgboost.dylib'
