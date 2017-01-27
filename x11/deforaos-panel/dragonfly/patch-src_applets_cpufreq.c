--- src/applets/cpufreq.c.orig	2016-01-12 03:32:16.000000000 +0200
+++ src/applets/cpufreq.c
@@ -20,7 +20,7 @@
 #include <string.h>
 #include <time.h>
 #include <errno.h>
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 # include <sys/param.h>
 # include <sys/sched.h>
 # include <sys/sysctl.h>
@@ -43,7 +43,7 @@ typedef struct _PanelApplet
 	int min;
 	int max;
 	int step;
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	char const * name;
 #endif
 } Cpufreq;
@@ -54,7 +54,7 @@ static Cpufreq * _cpufreq_init(PanelAppl
 static void _cpufreq_destroy(Cpufreq * cpufreq);
 
 /* callbacks */
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 static gboolean _cpufreq_on_timeout(gpointer data);
 #endif
 
@@ -80,7 +80,7 @@ PanelAppletDefinition applet =
 static Cpufreq * _cpufreq_init(PanelAppletHelper * helper, GtkWidget ** widget)
 {
 	const int timeout = 1000;
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	Cpufreq * cpufreq;
 	PangoFontDescription * desc;
 	GtkWidget * image;
@@ -164,7 +164,7 @@ static void _cpufreq_destroy(Cpufreq * c
 
 
 /* callbacks */
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 /* cpufreq_on_timeout */
 static gboolean _cpufreq_on_timeout(gpointer data)
 {
