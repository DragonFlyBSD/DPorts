--- src/sync.cpp.orig
+++ src/sync.cpp
@@ -340,7 +340,7 @@
 
 
 
-#if (defined(__GNU_LIBRARY__) && !defined(_SEM_SEMUN_UNDEFINED)) || defined(__FreeBSD__) 
+#if (defined(__GNU_LIBRARY__) && !defined(_SEM_SEMUN_UNDEFINED)) || defined(__FreeBSD__) || defined(__DragonFly__) 
 /* union semun is defined by including <sys/sem.h> */  
 #else
 union semun {
