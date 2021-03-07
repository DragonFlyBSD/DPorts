Explictly ignore get_name_np() for now, just return null
because it returns temp stack pointer here.

--- lib/FXThread.cpp.intermediate	2021-03-07 14:53:24.000000000 +0000
+++ lib/FXThread.cpp
@@ -925,7 +925,7 @@ FXbool FXThread::description(const FXStr
     return pthread_setname_np(desc.text())==0;
 #elif defined(__NetBSD__)
     return pthread_setname_np(tid,"%s",desc.text())==0;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     pthread_set_name_np((pthread_t)tid,desc.text());
     return true;
 #elif defined(__OpenBSD__)
