XXX assumption that pthread_self() returns pid_t

--- src/arvrealtime.c.intermediate	2020-11-29 15:42:59.000000000 +0000
+++ src/arvrealtime.c
@@ -225,7 +225,7 @@ static pid_t _gettid(void) {
         return (pid_t) syscall(SYS_gettid);
 #endif
 #ifdef BSD
-        return (pid_t) pthread_self();
+        return (pid_t)(uintptr_t) pthread_self();
 #endif
 }
 
