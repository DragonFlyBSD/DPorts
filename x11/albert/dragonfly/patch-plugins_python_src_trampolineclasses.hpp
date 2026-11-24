--- plugins/python/src/trampolineclasses.hpp.orig
+++ plugins/python/src/trampolineclasses.hpp
@@ -236,7 +236,7 @@
                         l->addRow(lbl);
                     }
                     else
-                        throw runtime_error(format("Invalid config widget type: {}", type.toStdString()));
+                        throw runtime_error("Invalid config widget type: " + type.toStdString());
                 }
                 return w;
             }
