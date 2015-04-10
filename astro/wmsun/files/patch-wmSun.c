
$FreeBSD: head/astro/wmsun/files/patch-wmSun.c 383467 2015-04-06 18:50:50Z bapt $

--- wmSun.c.orig	Thu Aug 15 18:04:04 2002
+++ wmSun.c	Thu Aug 15 18:06:24 2002
@@ -76,7 +76,8 @@
     int			LocalDayOfMonth, DayOfMonth;
     int			Hours, Mins, Secs, OldSecs, digit, xoff, xsize;
     int			OldMins;
-    long		CurrentLocalTime, CurrentGMTTime, date;
+    time_t		CurrentLocalTime, CurrentGMTTime;
+    long		date;
     double		UT, val, RA, DEC, LTRise, LTSet, LocalHour, hour24();
     int			D, H, M, S, sgn, A, B, q;
     char		str[10];
