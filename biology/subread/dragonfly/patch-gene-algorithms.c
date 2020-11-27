--- gene-algorithms.c.intermediate	2020-11-27 13:54:17.000000000 +0000
+++ gene-algorithms.c
@@ -1563,7 +1563,7 @@ int load_offsets(gene_offset_t* offsets
 
 double miltime(){
 	double ret;
-	#ifdef __FreeBSD__
+	#if defined(__FreeBSD__) || defined(__DragonFly__)
 	struct timeval tp;
 	struct timezone tz;
 	tz.tz_minuteswest=0;
