--- utils/gtf/gtfcalc.c.intermediate	2012-12-28 15:57:47.000000000 +0100
+++ utils/gtf/gtfcalc.c	2012-12-28 15:58:12.000000000 +0100
@@ -65,7 +65,7 @@
 
 /*-------------------------- Implementation -------------------------------*/
 
-#if __FreeBSD_version < 503000
+#if defined(__FreeBSD__) && __FreeBSD_version < 503000
 static double round(double v)
 {
 	return floor(v + 0.5);
