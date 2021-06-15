--- lib/FXThread.cpp.orig	2021-06-13 14:20:55.066913000 +0200
+++ lib/FXThread.cpp	2021-06-13 14:22:55.964207000 +0200
@@ -911,7 +911,7 @@
     return 0<=fxSetThreadDescription((HANDLE)tid,udesc);
 #elif defined(__APPLE__)
     return pthread_setname_np(desc.text())==0;
-#elif defined(__FreeBSD__) && !defined(HAVE_PTHREAD_SETNAME_NP)
+#elif (defined(__FreeBSD__) || defined(__DragonFly__)) && !defined(HAVE_PTHREAD_SETNAME_NP)
     pthread_set_name_np((pthread_t)tid,desc.text());
     return true;
 #elif defined(__NetBSD__) || defined(__OpenBSD__)
