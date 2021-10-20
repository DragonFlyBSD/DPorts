--- src/Mayaqua/Unix.c.intermediate	2020-11-29 11:54:20.000000000 +0000
+++ src/Mayaqua/Unix.c
@@ -112,6 +112,7 @@
 #include <stdarg.h>
 #include <time.h>
 #include <errno.h>
+#include <stdint.h>
 #include <Mayaqua/Mayaqua.h>
 
 #ifdef	UNIX_MACOS
@@ -1697,11 +1698,11 @@ void *UnixFileOpen(char *name, bool writ
 }
 
 // Return the current thread ID
-UINT UnixThreadId()
+uintmax_t UnixThreadId()
 {
 	UINT ret;
 
-	ret = (UINT)pthread_self();
+	ret = (uintmax_t)pthread_self();
 
 	return ret;
 }
@@ -1968,7 +1969,7 @@ void UnixUnlockEx(LOCK *lock, bool inner
 bool UnixLock(LOCK *lock)
 {
 	pthread_mutex_t *mutex;
-	UINT thread_id = UnixThreadId();
+	uintmax_t thread_id = UnixThreadId();
 	if (lock->Ready == false)
 	{
 		// State is invalid
