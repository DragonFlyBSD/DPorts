--- login.c.orig	2014-09-29 22:00:10.000000000 +0300
+++ login.c
@@ -151,7 +151,7 @@ void bftpd_logwtmp(char type)
         Will use timeval structure to get time instead.
         time(&(ut.ut_time));
         */
-#if !defined(__minix) && !defined(__NetBSD__)
+#if !defined(__minix) && !defined(__NetBSD__) && !defined(__DragonFly__)
         gettimeofday(&tv, NULL);
         ut.ut_tv.tv_sec = tv.tv_sec;
         ut.ut_tv.tv_usec = tv.tv_usec;
