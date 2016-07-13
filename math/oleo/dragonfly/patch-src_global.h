--- src/global.h.intermediate	2016-07-12 17:46:26 UTC
+++ src/global.h
@@ -231,7 +231,11 @@ extern int default_lock;
 
 extern unsigned short current_cycle;
 extern int ioerror;
+#ifdef __DragonFly__
+#include <errno.h>
+#else
 extern int errno;
+#endif
 extern const char oleo_version_string[];
 
 extern double astof (char **);
