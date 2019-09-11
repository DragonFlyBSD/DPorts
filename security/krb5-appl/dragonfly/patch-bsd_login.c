--- bsd/login.c.intermediate	2019-08-04 12:51:08.000000000 +0000
+++ bsd/login.c
@@ -1663,7 +1663,7 @@ void dolastlog(hostname, quiet, tty)
      int quiet;
      char *tty;
 {
-#if !(defined(__FreeBSD_version)) || (defined(__FreeBSD_version) && (__FreeBSD_version <= 900007))
+#if !(defined(__FreeBSD_version) || defined(__DragonFly__)) || (defined(__FreeBSD_version) && (__FreeBSD_version <= 900007))
 #if defined(HAVE_LASTLOG_H) || (defined(BSD) && (BSD >= 199103))
     struct lastlog ll;
     time_t lltime;
