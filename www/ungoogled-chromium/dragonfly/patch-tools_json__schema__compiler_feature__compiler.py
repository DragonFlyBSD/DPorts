diff --git tools/json_schema_compiler/feature_compiler.py tools/json_schema_compiler/feature_compiler.py
index ef97767e679c..0ca9be96aa81 100644
--- tools/json_schema_compiler/feature_compiler.py
+++ tools/json_schema_compiler/feature_compiler.py
@@ -291,6 +291,7 @@ FEATURE_GRAMMAR = ({
                 'win': 'Feature::WIN_PLATFORM',
                 'openbsd': 'Feature::LINUX_PLATFORM',
                 'freebsd': 'Feature::LINUX_PLATFORM',
+                'dragonfly': 'Feature::LINUX_PLATFORM',
             }
         }
     },
