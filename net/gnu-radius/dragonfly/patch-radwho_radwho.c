--- radwho/radwho.c.intermediate	2019-12-26 18:53:22.000000000 +0000
+++ radwho/radwho.c
@@ -42,7 +42,7 @@ int want_rad_record(struct radutmp *rt);
 
 /* UTMP stuff. Uses utmpx on svr4 */
 #include <sys/param.h>
-#if defined(__svr4__) || defined(__sgi) || (defined(__FreeBSD__) && __FreeBSD_version >= 900007)
+#if defined(__svr4__) || defined(__sgi) || (defined(__FreeBSD__) && __FreeBSD_version >= 900007) || defined(__DragonFly__)
 #  include <utmpx.h>
 #  include <sys/fcntl.h>
 #  define utmp utmpx
@@ -70,6 +70,11 @@ int want_rad_record(struct radutmp *rt);
 #  define ut_user ut_name
 #endif
 
+#if defined(__DragonFly__)
+#  define UTMP_FILE _PATH_UTMPX
+#  define ut_time ut_xtime
+#endif
+
 #if defined(__FreeBSD__) && __FreeBSD_version >= 900007
 #  define UTMP_FILE "/var/run/utmp"
 #  define ut_name ut_user
