--- ksysguardd/FreeBSD/uptime.c.orig	2018-05-01 12:50:42 UTC
+++ ksysguardd/FreeBSD/uptime.c
@@ -38,8 +38,10 @@ void printUptime( const char* cmd ) {
     struct timespec tp;
     float uptime = 0.;
 
+#ifdef CLOCK_UPTIME
     if (clock_gettime(CLOCK_UPTIME, &tp) != -1)
         uptime = tp.tv_nsec / 1000000000.0 + tp.tv_sec;
+#endif
     fprintf( CurrentClient, "%f\n", uptime);
 }
 
