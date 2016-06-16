--- xml-format.c.orig	2013-04-13 00:52:40.000000000 +0300
+++ xml-format.c
@@ -17,6 +17,7 @@
 #include <string.h>
 #include <ctype.h>
 #include <stdlib.h>
+#include <errno.h>
 #include <limits.h>
 #include <fcntl.h>
 #include <sysexits.h>
@@ -69,7 +70,9 @@ int xml_format(const char *filename)
 	    buff[COPY_BUFF_SIZE+1],
 	    *subdir;
     size_t  bytes;
+#ifndef __DragonFly__
     extern int  errno;
+#endif
     tag_list_t  tags;
     
     if ( ( subdir = strrchr(filename, '.')) == NULL )
