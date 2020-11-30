XXX assumption that pthread_self() returns pid_t

--- src/Mayaqua/Unix.c.orig	2020-04-30 08:26:45 UTC
+++ src/Mayaqua/Unix.c
@@ -14,6 +14,7 @@
 #include <string.h>
 #include <wchar.h>
 #include <stdarg.h>
+#include <stdint.h>
 #include <time.h>
 #include <errno.h>
 #include <sys/utsname.h>
@@ -1542,7 +1543,7 @@ UINT UnixThreadId()
 {
 	UINT ret;
 
-	ret = (UINT)pthread_self();
+	ret = (UINT)(uintptr_t)pthread_self();
 
 	return ret;
 }
