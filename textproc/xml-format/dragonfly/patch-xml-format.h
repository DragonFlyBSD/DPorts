--- xml-format.h.orig	2013-04-13 00:52:40.000000000 +0300
+++ xml-format.h
@@ -3,8 +3,10 @@
 #define MAX_LINE_LEN    4096
 #define MAX_COLS        80
 
+#ifndef __DragonFly__
 #define MAX(x,y)    ((x) > (y) ? (x) : (y))
 #define MIN(x,y)    ((x) < (y) ? (x) : (y))
+#endif
 
 #define INCREASE(indent,step)    (indent = MIN((indent+step),40))
 #define DECREASE(indent,step)    (indent = MAX((indent-step),0))
