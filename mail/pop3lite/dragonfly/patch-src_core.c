--- src/core.c.orig	2001-05-02 10:53:26.000000000 +0200
+++ src/core.c
@@ -37,7 +37,11 @@
 
 static const char rcsid[]="$Id: core.c,v 1.8.2.2 2001/05/02 08:53:26 algernon Exp $";
 
+#ifdef __DragonFly__
+#include <errno.h>
+#else
 int errno;
+#endif
 
 /*
  * FORWARD DECLARATIONS
