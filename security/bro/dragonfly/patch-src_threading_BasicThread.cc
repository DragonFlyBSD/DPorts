--- src/threading/BasicThread.cc.orig	2017-06-26 23:24:37 UTC
+++ src/threading/BasicThread.cc
@@ -60,7 +60,7 @@ void BasicThread::SetOSName(const char*
 	pthread_setname_np(arg_name);
 #endif
 
-#ifdef FREEBSD
+#if defined FREEBSD || defined DRAGONFLY
 	pthread_set_name_np(thread.native_handle(), arg_name, arg_name);
 #endif
 	}
