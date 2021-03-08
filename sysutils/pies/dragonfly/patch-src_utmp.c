--- src/utmp.c.orig	2020-10-17 12:04:49 UTC
+++ src/utmp.c
@@ -48,6 +48,13 @@ typedef struct utmp UTMPX;
 # define endutxent endutent
 #endif
 
+#ifndef WTMPX_FILE
+# define WTMPX_FILE _PATH_WTMPX
+#endif
+#ifndef UTMPX_FILE
+# define UTMPX_FILE _PATH_UTMPX
+#endif
+
 #if !defined(UTMPX_FILE) || !defined(WTMPX_FILE)
 # if !defined(UTMP_FILE) || !defined(WTMP_FILE)
 #  ifndef  HAVE_UTMPX_H
