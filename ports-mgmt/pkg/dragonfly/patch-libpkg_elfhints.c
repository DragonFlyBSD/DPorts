--- libpkg/elfhints.c.orig	2024-05-22 14:56:17 UTC
+++ libpkg/elfhints.c
@@ -30,6 +30,7 @@
 #include <bsd_compat.h>
 #include <sys/mman.h>
 #include <sys/stat.h>
+#include <sys/endian.h>
 
 #include <assert.h>
 #include <ctype.h>
