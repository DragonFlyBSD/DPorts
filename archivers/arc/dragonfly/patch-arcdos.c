--- arcdos.c.orig
+++ arcdos.c
@@ -184,6 +184,5 @@ setstamp(f, date, time)		/* set a file's date/time sta
 	tm.tm_year = (date >> 9) + 80;
-#if !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__NetBSD__)
+#if 0 /* no longer needed - all BSDs have timelocal */
 	tvp[0].tv_sec = tmclock(&tm);
-#else
+#endif
 	tvp[0].tv_sec = timelocal(&tm);
-#endif
 	tvp[1].tv_sec = tvp[0].tv_sec;
