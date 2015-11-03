--- src/threading/BasicThread.cc.orig	2015-09-06 22:43:16.000000000 +0300
+++ src/threading/BasicThread.cc
@@ -59,7 +59,7 @@ void BasicThread::SetOSName(const char*
 	pthread_setname_np(arg_name);
 #endif
 
-#ifdef FREEBSD
+#if defined(FREEBSD) || defined(DRAGONFLY)
 	pthread_set_name_np(pthread_self(), arg_name, arg_name);
 #endif
 	}
