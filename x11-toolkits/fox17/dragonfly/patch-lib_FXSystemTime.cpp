--- lib/FXSystemTime.cpp.orig	2021-06-13 14:18:02.910765000 +0200
+++ lib/FXSystemTime.cpp	2021-06-13 14:20:01.948102000 +0200
@@ -264,7 +264,7 @@
   setuplocaltimezone();
 #if defined(_WIN32)
   return minutes*tzi.Bias;              // +minutes*tzi.StandardBias;
-#elif defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
   struct tm tmresult;
   time_t tmp=time(&tmp);
   struct tm* ptm=localtime_r(&tmp,&tmresult);
@@ -280,7 +280,7 @@
   setuplocaltimezone();
 #if defined(_WIN32)
   return minutes*tzi.DaylightBias;      // Or difference between standard and daylight bias.
-#elif defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
   return -hours*((tzname[1][0] == ' ') ? 0 : 1);
 #else
   return -hours*daylight;
