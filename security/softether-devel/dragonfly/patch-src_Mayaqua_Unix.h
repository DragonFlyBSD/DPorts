--- src/Mayaqua/Unix.h.intermediate	2020-11-29 11:54:19.000000000 +0000
+++ src/Mayaqua/Unix.h
@@ -104,6 +104,8 @@
 
 #ifdef	OS_UNIX
 
+#include <stdint.h>
+
 #ifndef	UNIX_H
 #define	UNIX_H
 
@@ -164,7 +166,7 @@ void UnixFreeEvent(EVENT *event);
 bool UnixWaitThread(THREAD *t);
 void UnixFreeThread(THREAD *t);
 bool UnixInitThread(THREAD *t);
-UINT UnixThreadId();
+uintmax_t UnixThreadId();
 void *UnixFileOpen(char *name, bool write_mode, bool read_lock);
 void *UnixFileOpenW(wchar_t *name, bool write_mode, bool read_lock);
 void *UnixFileCreate(char *name);
