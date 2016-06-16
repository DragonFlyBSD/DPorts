--- tag-list.c.orig	2013-04-13 00:52:40.000000000 +0300
+++ tag-list.c
@@ -1,4 +1,5 @@
 #include <stdio.h>
+#include <errno.h>
 #include <limits.h>
 #include <string.h>
 #include <stdlib.h>
@@ -80,7 +81,9 @@ size_t  read_string(FILE *infile, char *
 void    tag_list_error_check(int list_size, const char *path)
 
 {
+#ifndef __DragonFly__
     extern int  errno;
+#endif
     
     if ( list_size == -1 )
     {
