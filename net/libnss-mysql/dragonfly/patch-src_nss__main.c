--- src/nss_main.c.orig	2004-11-13 18:10:32 UTC
+++ src/nss_main.c
@@ -38,7 +38,7 @@ static const char rcsid[] =
 #endif
 
 pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
-pthread_once_t _nss_mysql_once_control = {PTHREAD_ONCE_INIT};
+pthread_once_t _nss_mysql_once_control = PTHREAD_ONCE_INIT;
 static int _nss_mysql_locked_by_atfork = 0;
 
 #define MAX_MSG_SIZE 1024
