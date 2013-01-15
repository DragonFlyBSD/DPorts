--- media/liboggplay/src/liboggplay/std_semaphore.h.orig	2012-03-06 15:45:39.000000000 +0100
+++ media/liboggplay/src/liboggplay/std_semaphore.h	2013-01-15 19:28:59.148814000 +0100
@@ -74,7 +74,7 @@
  * @retval non-zero on error 
  */
 
-#if defined(linux) || defined(SOLARIS) || defined(AIX) || defined(__FreeBSD__)
+#if defined(linux) || defined(SOLARIS) || defined(AIX) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <semaphore.h>
 #if defined(__FreeBSD__) 
 #define SEM_CREATE(p,s) sem_init(&(p), 0, s)  
