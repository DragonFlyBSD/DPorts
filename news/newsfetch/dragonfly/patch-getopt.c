--- getopt.c.intermediate	2020-11-24 07:04:21.000000000 +0000
+++ getopt.c
@@ -1,4 +1,5 @@
 #include        <stdio.h>
+#include <string.h>
 #define EPR                 fprintf(stderr,
 #define ERR(str, chr)       if(opterr){EPR "%s%c\n", str, chr);}
 int     opterr = 1;
