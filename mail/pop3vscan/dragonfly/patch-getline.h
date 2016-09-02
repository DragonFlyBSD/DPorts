--- getline.h.intermediate	2016-09-02 20:13:24 UTC
+++ getline.h
@@ -27,6 +27,12 @@
 #ifndef _GETLINE_H
 #define _GETLINE_H
 
+#ifdef __DragonFly__
+/* XXX avoid collision with getline(3) */
+#include <stdio.h>
+#define getline get_line
+#endif
+
 /* return values */
 #define GETLINE_OK	    0   /* ok, there is a line		    */
 #define GETLINE_NOLINE	    1	/* there's no complete line	    */
