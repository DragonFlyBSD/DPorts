--- src/rxvt.h.intermediate	2008-08-04 07:41:35.000000000 +0000
+++ src/rxvt.h
@@ -441,6 +441,10 @@ typedef char*	    XPointer;
 # define RXVT_WTMP_FILE	WTMP_FILENAME
 #endif
 
+#ifdef _PATH_WTMPX
+# define RXVT_WTMPX_FILE	_PATH_WTMPX
+#endif
+
 #ifdef LASTLOG_SUPPORT
 # ifdef OS_SOLARIS
 #  define LASTLOG_FILE	    "/var/adm/lastlog"
