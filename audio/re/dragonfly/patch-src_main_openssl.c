--- src/main/openssl.c.orig	2015-06-29 09:51:05.000000000 +0300
+++ src/main/openssl.c
@@ -26,7 +26,7 @@ static pthread_mutex_t *lockv;
 static inline unsigned long threadid(void)
 {
 #if defined (DARWIN) || defined (FREEBSD) || defined (OPENBSD) || \
-	defined (NETBSD)
+	defined (NETBSD) || defined (DRAGONFLY)
 	return (unsigned long)(void *)pthread_self();
 #else
 	return (unsigned long)pthread_self();
