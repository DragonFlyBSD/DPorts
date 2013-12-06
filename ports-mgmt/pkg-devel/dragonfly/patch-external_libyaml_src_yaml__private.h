--- external/libyaml/src/yaml_private.h.orig	2013-12-05 18:04:38.000000000 +0000
+++ external/libyaml/src/yaml_private.h
@@ -8,6 +8,8 @@
 #include <assert.h>
 #include <limits.h>
 
+#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
+
 /*
  * Memory management.
  */
