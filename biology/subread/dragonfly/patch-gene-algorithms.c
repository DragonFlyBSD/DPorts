--- gene-algorithms.c.orig	2021-06-20 10:16:41.569622000 +0200
+++ gene-algorithms.c	2021-06-20 10:18:37.546979000 +0200
@@ -1568,7 +1568,7 @@
 
 double miltime(){
 	double ret;
-	#ifdef __FreeBSD__
+	#if defined(__FreeBSD__) || defined(__DragonFly__)
 		struct timeval tp;
 		struct timezone tz;
 		tz.tz_minuteswest=0;
