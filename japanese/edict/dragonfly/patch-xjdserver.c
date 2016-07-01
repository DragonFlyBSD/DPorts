--- xjdserver.c.intermediate	2016-06-23 10:00:38.000000000 +0300
+++ xjdserver.c
@@ -56,7 +56,11 @@ int jiver = 14;
 int thisdic = 0;
 int DicNum;
 
+#ifdef __DragonFly__
+#include <errno.h>
+#else
 extern int errno;
+#endif
 
 extern unsigned char Dnamet[10][100],XJDXnamet[10][100];
 extern unsigned char *dicbufft[10];
