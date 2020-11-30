--- mlib/src/linux/mThread.c.orig	2019-11-29 22:47:59 UTC
+++ mlib/src/linux/mThread.c
@@ -130,7 +130,7 @@ mBool mThreadWait(mThread *p)
 {
 	if(!p || !p->handle) return TRUE;
 
-	if(pthread_join(p->handle, NULL) != 0)
+	if(pthread_join((pthread_t)p->handle, NULL) != 0)
 		return FALSE;
 	else
 	{
