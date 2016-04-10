--- modules/fileio/sci_gateway/c/sci_get_absolute_file_path.c.orig	2015-03-31 09:31:25 UTC
+++ modules/fileio/sci_gateway/c/sci_get_absolute_file_path.c
@@ -62,7 +62,7 @@ int sci_get_absolute_file_path(char *fna
                 C2F(getfiledesc)(&fdmax);
                 for (i = fdmax - 1; i >= 0; i--)
                 {
-                    FILE fa;
+                    struct __FILE_public fa;
                     int swap2 = 0;
                     int type = 0;
                     int mode = 0;
