--- Source/NSTimeZone.m.orig	Sun Jan  8 08:41:32 2023
+++ Source/NSTimeZone.m	Sat Nov
@@ -1622,7 +1622,7 @@ static NSMapTable	*absolutes = 0;
 	}
 
 
-#if HAVE_TZSET && !defined(__FreeBSD__) && !defined(__OpenBSD__)
+#if HAVE_TZSET && !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__DragonFly__)
       /*
        * Try to get timezone from tzset and tzname/daylight.
        * If daylight is non-zero, then tzname[0] is only the name
