--- tools/rkpng2c.c.orig
+++ tools/rkpng2c.c
@@ -29,6 +29,8 @@
 #define RK_VERSION_STR "1.1.0"
 
 #include <stdio.h>
+#include <stdlib.h>
+#include <string.h>
 #include <libgen.h>
 #include <cairo/cairo.h>
 
@@ -57,6 +59,9 @@
         }
 
         const unsigned char *buff = cairo_image_surface_get_data(image);
+        /* basename() may hand back the same static buffer every time */
+        char *file_name = strdup(basename(argv[1]));
+        char *array_name = strdup(basename(argv[3]));
         fprintf(fptr, "/**\n"
                       " * Generated with rkpng2c version %s, part of Redkite GUI toolkit.\n"
                       " * File name: %s\n"
@@ -67,11 +72,13 @@
                       "const int %s_h = %d;\n"
                       "const unsigned char %s[] = {\n",
                       RK_VERSION_STR,
-                      basename(argv[1]),
+                      file_name,
                       w, h,
-                      basename(argv[3]), w,
-                      basename(argv[3]), h,
-                      basename(argv[3]));
+                      array_name, w,
+                      array_name, h,
+                      array_name);
+        free(file_name);
+        free(array_name);
         for (int i = 0; i < w * h * 4; i++) {
                 if ((i + 1) == 12 || (i + 1) % 12 == 0)
                         fprintf(fptr, "0x%02x,\n", buff[i]);
