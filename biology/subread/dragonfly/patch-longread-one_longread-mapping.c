--- longread-one/longread-mapping.c.orig	2021-06-20 10:27:31.224788000 +0200
+++ longread-one/longread-mapping.c	2021-06-20 10:28:12.503849000 +0200
@@ -227,7 +227,7 @@
 #endif
 double LRMmiltime(){
 	double ret;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 
 	struct timeval tp;
 	struct timezone tz;
