--- src/wtmp.c.orig	2017-04-10 02:31:02 UTC
+++ src/wtmp.c
@@ -36,6 +36,7 @@ int log_wtmp(const char *line, const cha
 
 #if ((defined(SVR4) || defined(__SVR4)) || \
     (defined(__NetBSD__) && defined(HAVE_UTMPX_H)) || \
+    (defined(__DragonFly__) && defined(HAVE_UTMPX_H)) || \
     (defined(__FreeBSD_version) && __FreeBSD_version >= 900007 && defined(HAVE_UTMPX_H))) && \
     !(defined(LINUX) || defined(__hpux) || defined (_AIX))
   /* This "auxilliary" utmp doesn't exist under linux. */
@@ -96,6 +97,9 @@ int log_wtmp(const char *line, const cha
     memcpy(&utx.ut_ss, pr_netaddr_get_inaddr(ip), sizeof(utx.ut_ss));
     gettimeofday(&utx.ut_tv, NULL);
 
+#elif defined(__DragonFly__) && defined(HAVE_UTMPX_H)
+    gettimeofday(&utx.ut_tv, NULL);
+
 #elif defined(__FreeBSD_version) && __FreeBSD_version >= 900007 && defined(HAVE_UTMPX_H)
     gettimeofday(&utx.ut_tv, NULL);
 
