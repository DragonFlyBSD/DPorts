--- mono/utils/mono-threads-freebsd.c.orig	2019-07-16 18:16:12 UTC
+++ mono/utils/mono-threads-freebsd.c
@@ -4,7 +4,7 @@
 
 #include <config.h>
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <mono/utils/mono-threads.h>
 #include <pthread.h>
