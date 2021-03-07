--- lib/FXSystemTime.cpp.intermediate	2021-03-07 14:53:24.000000000 +0000
+++ lib/FXSystemTime.cpp
@@ -264,7 +264,7 @@ FXTime FXSystem::localTimeZoneOffset(){
   setuplocaltimezone();
 #if defined(_WIN32)
   return minutes*tzi.Bias;              // +minutes*tzi.StandardBias;
-#elif defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
   return 0;     // FIXME
 #else
   return seconds*timezone;
@@ -278,7 +278,7 @@ FXTime FXSystem::daylightSavingsOffset()
 #if defined(_WIN32)
   return minutes*tzi.DaylightBias;      // Or difference between standard and daylight bias.
 #else
-# if defined(__FreeBSD__)
+# if defined(__FreeBSD__) || defined(__DragonFly__)
    tzset();
    int daylight = ((tzname[1][0] == ' ') ? 0 : 1);
 # endif
