--- src/debuglog.c.orig	2019-10-22 16:47:02 UTC
+++ src/debuglog.c
@@ -187,7 +187,7 @@ static void log_line(const int priority,
 					break;
 			}
 
-#ifdef __APPLE__
+#if defined(__APPLE__) || defined(__DragonFly__)
 #define THREAD_FORMAT "%p"
 #else
 #define THREAD_FORMAT "%lu"
