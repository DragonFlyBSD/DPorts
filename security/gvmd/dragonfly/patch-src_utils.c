--- src/utils.c.intermediate	2021-03-10 15:47:49.000000000 +0000
+++ src/utils.c
@@ -422,7 +422,7 @@ iso_time_internal (time_t *epoch_time, c
   tm = localtime (epoch_time);
   if (tm == NULL)
     return NULL;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   if (tm->tm_gmtoff == 0)
 #else
   if (timezone == 0)
