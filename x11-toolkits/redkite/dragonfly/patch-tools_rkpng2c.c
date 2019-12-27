
WARNINGS
     The basename() function returns a pointer to internal static storage
     space that will be overwritten by subsequent calls.

$ rkpng2c about.png about_png.c rk_about_png
image size: 0x0
$ cat about_png.c
/**
 * Generated with png2c
 * File name: about.png
 * Image size name: 0x0
 */

const unsigned char about.png[] = {
};


--- tools/rkpng2c.c.orig	2019-08-06 19:58:51 UTC
+++ tools/rkpng2c.c
@@ -29,6 +29,10 @@
 #define RK_VERSION_STR "1.0.0"
 
 #include <stdio.h>
+#ifdef __DragonFly__
+#include <stdlib.h>
+#include <string.h>
+#endif
 #include <libgen.h>
 #include <cairo/cairo.h>
 
@@ -57,13 +61,23 @@ int main(int argc , char **argv)
         }
 
         const unsigned char *buff = cairo_image_surface_get_data(image);
+#ifdef __DragonFly__
+	char *b1 = strdup(basename(argv[1]));
+	char *b3 = strdup(basename(argv[3]));
+#endif
         fprintf(fptr, "/**\n"
                       " * Generated with png2c\n"
                       " * File name: %s\n"
                       " * Image size name: %dx%d\n"
                       " */\n"
                       "\n"
+#ifdef __DragonFly__
+                "const unsigned char %s[] = {\n", b1, w, h, b3);
+		free(b1);
+		free(b3);
+#else
                 "const unsigned char %s[] = {\n", basename(argv[1]), w, h, basename(argv[3]));
+#endif
         for (int i = 0; i < w * h * 4; i++) {
                 if ((i + 1) == 12 || (i + 1) % 12 == 0)
                         fprintf(fptr, "0x%02x,\n", buff[i]);
