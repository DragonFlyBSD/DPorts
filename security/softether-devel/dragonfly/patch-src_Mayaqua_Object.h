--- src/Mayaqua/Object.h.intermediate	2020-11-29 11:54:19.000000000 +0000
+++ src/Mayaqua/Object.h
@@ -105,6 +105,10 @@
 #ifndef	OBJECT_H
 #define	OBJECT_H
 
+#ifdef OS_UNIX
+#include <stdint.h>
+#endif
+
 
 // Constants
 #define	OBJECT_ALLOC_FAIL_SLEEP_TIME		150
@@ -116,7 +120,7 @@ struct LOCK
 	void *pData;
 	BOOL Ready;
 #ifdef	OS_UNIX
-	UINT thread_id;
+	uintmax_t thread_id;
 	UINT locked_count;
 #endif	// OS_UNIX
 #ifdef	_DEBUG
