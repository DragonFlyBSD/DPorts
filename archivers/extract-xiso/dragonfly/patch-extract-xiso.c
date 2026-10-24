--- extract-xiso.c.intermediate	2026-09-05 04:21:47 UTC
+++ extract-xiso.c
@@ -282,7 +282,7 @@
 	#define READWRITEFLAGS				O_RDWR
 
 	typedef	off_t						xoff_t;
-#elif defined( __FreeBSD__ )
+#elif defined( __FreeBSD__ ) || defined( __DragonFly__ )
 	#define exiso_target				"freebsd"
 
 	#define PATH_CHAR					'/'
