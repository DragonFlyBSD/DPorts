--- libdjvu/miniexp.cpp.orig	2015-02-11 06:35:37.000000000 +0200
+++ libdjvu/miniexp.cpp
@@ -26,6 +26,7 @@
 #include <stddef.h>
 #include <stdlib.h>
 #include <stdio.h>
+#include <cstdio>
 #include <ctype.h>
 #include <errno.h>
 #include <string.h>
@@ -1241,7 +1242,7 @@ static int stdio_fputs(miniexp_io_t *io,
 
 static int true_stdio_fgetc(miniexp_io_t *io) {
   FILE *f = (io->data[0]) ? (FILE*)(io->data[0]) : stdin;
-  return ::getc(f);
+  return getc(f);
 }
 static int compat_getc() { 
   return true_stdio_fgetc(&miniexp_io); 
