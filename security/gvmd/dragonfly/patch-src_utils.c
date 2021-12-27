--- src/utils.c.intermediate	2021-12-27 15:47:49.000000000 +0000
+++ src/utils.c
@@ -432,7 +432,7 @@ iso_time_internal (time_t *epoch_time, c
 
   if (localtime_r (epoch_time, &tm) == NULL)
     return NULL;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   if (tm.tm_gmtoff == 0)
 #else
   if (timezone == 0)
