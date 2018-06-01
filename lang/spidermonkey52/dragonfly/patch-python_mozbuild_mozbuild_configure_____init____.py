--- python/mozbuild/mozbuild/configure/__init__.py.orig	2018-01-11 18:49:46 UTC
+++ python/mozbuild/mozbuild/configure/__init__.py
@@ -356,7 +356,7 @@ class ConfigureSandbox(dict):
         # All options should have been removed (handled) by now.
         for arg in self._helper:
             without_value = arg.split('=', 1)[0]
-            raise InvalidOptionError('Unknown option: %s' % without_value)
+            print('Ignoring', without_value, ': Unknown option')
 
         # Run the execution queue
         for func, args in self._execution_queue:
