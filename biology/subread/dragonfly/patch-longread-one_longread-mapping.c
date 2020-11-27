--- longread-one/longread-mapping.c.intermediate	2020-11-27 13:54:17.000000000 +0000
+++ longread-one/longread-mapping.c
@@ -227,7 +227,7 @@ double LRMmiltime(){
 	double ret;
 
 /* Why not use gettimeofday() on all platforms? */
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 
 	struct timeval tp;
 	struct timezone tz;
