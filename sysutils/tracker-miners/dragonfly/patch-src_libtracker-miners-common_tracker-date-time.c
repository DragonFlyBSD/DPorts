--- src/libtracker-miners-common/tracker-date-time.c.orig	2017-12-16 11:27:16 UTC
+++ src/libtracker-miners-common/tracker-date-time.c
@@ -124,7 +124,7 @@ tracker_string_to_date (const gchar *dat
 		/* mktime() always assumes that "tm" is in locale time but we
 		 * want to keep control on time, so we go to UTC
 		 */
-#if !(defined(__FreeBSD__) || defined(__OpenBSD__) || defined (__GLIBC__))
+#if !(defined(__FreeBSD__) || defined(__OpenBSD__) || defined (__GLIBC__) || defined (__DragonFly__))
 		t  = mktime (&tm);
 		t -= timezone;
 #else
