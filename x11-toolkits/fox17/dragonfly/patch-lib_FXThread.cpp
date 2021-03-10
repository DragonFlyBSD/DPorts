Explictly ignore get_name_np() for now, just return null
because it returns temp stack pointer here.

--- lib/FXThread.cpp.intermediate	2021-03-07 14:53:24.000000000 +0000
+++ lib/FXThread.cpp
@@ -925,14 +925,14 @@ FXbool FXThread::description(const FXStr
     return pthread_setname_np(desc.text())==0;
 #elif defined(__NetBSD__)
     return pthread_setname_np(tid,"%s",desc.text())==0;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || (defined(__DragonFly__) && !defined(HAVE_PTHREAD_SETNAME_NP))
     pthread_set_name_np((pthread_t)tid,desc.text());
     return true;
 #elif defined(__OpenBSD__)
     pthread_set_name_np(tid,desc.text());
     return true;
 #elif defined(HAVE_PTHREAD_SETNAME_NP)
-    return pthread_setname_np(tid,desc.text())==0;
+    return pthread_setname_np((pthread_t)tid,desc.text())==0;
 #endif
     }
   return false;
@@ -967,7 +967,7 @@ FXString FXThread::description() const {
       }
 #elif defined(HAVE_PTHREAD_GETNAME_NP)
     FXchar desc[256];
-    if(pthread_getname_np(tid,desc,ARRAYNUMBER(desc))==0){
+    if(pthread_getname_np((pthread_t)tid,desc,ARRAYNUMBER(desc))==0){
       return desc;
       }
 #endif
