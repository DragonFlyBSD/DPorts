--- tws.c.orig
+++ tws.c
@@ -30,7 +30,7 @@
 #include <sys/types.h>
 #include <time.h>
 #include <stdlib.h>
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 # ifdef SYS5
 extern int daylight;
 extern long timezone;
@@ -59,7 +59,7 @@
 struct tws* dlocaltime( long* clock )
 {
    register struct tm* tm;
-#if !defined(SYS5) && !defined(__FreeBSD__)
+#if !defined(SYS5) && !defined(__FreeBSD__) && !defined(__DragonFly__)
    struct timeb tb;
 #endif /*not SYS5*/
    static struct tws tw;
@@ -79,7 +79,7 @@
    tw.tw_yday = tm->tm_yday;
    if ( tm->tm_isdst )
       tw.tw_flags |= TW_DST;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
    tw.tw_zone = tm->tm_gmtoff / 60;
 #elif defined(SYS5)
    tzset();
