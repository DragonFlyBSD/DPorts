--- tools/json_schema_compiler/feature_compiler.py.orig
+++ tools/json_schema_compiler/feature_compiler.py
@@ -253,6 +253,7 @@
         'win': 'Feature::WIN_PLATFORM',
         'openbsd': 'Feature::LINUX_PLATFORM',
         'freebsd': 'Feature::LINUX_PLATFORM',
+        'dragonfly': 'Feature::LINUX_PLATFORM',
       }
     }
   },
